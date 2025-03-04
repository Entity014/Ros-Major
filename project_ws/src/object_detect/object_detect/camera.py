import rclpy
import cv2
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist
from scipy.spatial.distance import pdist
from ultralytics import YOLO

model = YOLO("yolo11n.pt")


class TeleopTurtle(Node):

    def __init__(self):
        super().__init__("teleop_turtle")
        self.cap = cv2.VideoCapture(0)
        self.cmd_pub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.timer = self.create_timer(0.01, self.timer_callback)

    def timer_callback(self):
        twist = Twist()
        ret, frame = self.cap.read()
        results = model.predict(frame)

        person_frame = frame.copy()

        max_dist = None

        # Loop through detected objects
        for box in results[0].boxes:
            class_id = int(box.cls[0])  # Get class index
            label = results[0].names[class_id]  # Convert index to label

            if label == "person":  # Only track 'person'
                # Get bounding box coordinates
                x1, y1, x2, y2 = map(int, box.xyxy[0])
                confidence = box.conf[0].item()  # Get confidence score

                # Draw bounding box
                cv2.rectangle(person_frame, (x1, y1), (x2, y2), (0, 255, 0), 3)
                dis = np.array([[x1, y1], [x2, y2]])

                max_dist = max(pdist(dis))
                cv2.putText(
                    person_frame,
                    f"{label} {confidence:.2f}",
                    (x1, y1 - 10),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.7,
                    (0, 255, 0),
                    2,
                )
                cv2.putText(
                    person_frame,
                    f"{pdist(dis)}",
                    (x1, y1 - 40),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.7,
                    (0, 0, 255),
                    2,
                )

        if max_dist is not None:
            # self.get_logger().info(max_dist)
            if max_dist >= 400:
                twist.linear.x = 0.5
            else:
                twist.linear.x = -0.5
            self.cmd_pub.publish(twist)

        cv2.imshow("Person Tracking - YOLOv11", person_frame)

        cv2.waitKey(1)


def main(args=None):
    rclpy.init(args=args)
    node = TeleopTurtle()
    rclpy.spin(node)
    cv2.destroyAllWindows()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
