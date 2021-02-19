# This is the repo of loadable kernel module (LKM) for armv7 and armv8 to enable the userspace pmu access. 

In order to build the LKM succesfully, the xilinx linux source code is required. 

The link is here: https://github.com/Xilinx/linux-xlnx

Put the source code at /lib/modules/(`uname -r`)/build, then go either armv7 or armv8 folder to build the kernel module. 

Use the scripts in the folder to load or unload the module from userspace. 

There are examples of using Perf event and the performance monitor register to access pmu. 

More information about Perf can be found here:

https://perf.wiki.kernel.org/index.php/Tutorial

More information about armv7 performance monitor register can be found here:

https://developer.arm.com/documentation/ddi0438/i/performance-monitor-unit

More information about armv8 performance monitor register can be found here:

https://developer.arm.com/documentation/ddi0438/i/performance-monitor-unit
