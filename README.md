PRGP_i90
========

i90 ROS package provided by drrobot is for catkin workspaces.
For this package to be used in rosbuild workspace it needs to be converted.
This repository provides the converted package.

WARNINGS:
The messages published from the converted package cannot be monitored using "rostopic echo" command.
The error given is: "cannot load message class"
There is no problem for other nodes to subscribe to published messages.

