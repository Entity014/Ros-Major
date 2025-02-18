import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/entity014/Ros-Major/650610841_final/install/lidar_650610841'
