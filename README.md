
# ROCALL
## ReactOS x86-32 syscall fuzzer.

# System Requirements

+ ReactOS x86-32;
+ Account with administrative privileges (optional).

# Usage
ROCALL [-win32k] [-logn | logv ] [-pc Value] [-sc Value]
* -logn     - enable logging via COM1 port, service name will be logged, default disabled;
* -logv     - enable logging via COM1 port, service name and call parameters will be logged( slow), default disabled;
* -win32k   - launch win32k service table fuzzing, default ntoskrnl service table fuzzing;
* -pc Value - number of passes for each service (default value 1024);
* -sc Value - start fuzzing from service entry number (index from 0), default 0.

When used without parameters RoCall will start fuzzing system service table.

Example: 
+ ROCALL
+ ROCALL -logn
+ ROCALL -logv
+ ROCALL -logn -pc 1234
+ ROCALL -logv -pc 1234
+ ROCALL -logn -pc 1234 -sc 100
+ ROCALL -logv -pc 1234 -sc 100
+ ROCALL -win32k
+ ROCALL -win32k -logn
+ ROCALL -win32k -logv
+ ROCALL -win32k -logn -pc 1234
+ ROCALL -win32k -logv -pc 1234
+ ROCALL -win32k -logn -pc 1234 -sc 100
+ ROCALL -win32k -logv -pc 1234 -sc 100


Note: make sure to configure virtual machine COM1 port settings before trying this tool.

# How it work

It brute-force through system services and call them multiple times with input parameters randomly taken from predefined "bad arguments" list.


# Configuration

By using blacklist.ini configuration file you can blacklist certain services. To do this - add service name (case sensitive) to the corresponding section of the blacklist.ini, e.g. if you want to blacklist services from KiServiceTable then use [ntos] section.

Example of blacklist.ini (default config shipped with program)

<pre>[ntos]
NtClose
NtShutdownSystem
NtSuspendProcess
NtSuspendThread
NtTerminateProcess
NtTerminateThread

[win32k]
NtUserSwitchDesktop
NtUserLockWorkStation
</pre>

# Warning

This program may crash the operation system, affect it stability, which may result in data lost or program crash itself. You use it at your own risk.

# Build

ROCALL comes with full source code written in C with tiny assembler usage.
In order to build from source you need Microsoft Visual Studio 2015 and later versions.

## Instructions

* Select Platform ToolSet first for project in solution you want to build (Project->Properties->General): 
  * v120 for Visual Studio 2013;
  * v140 for Visual Studio 2015; 
  * v141 for Visual Studio 2017.
* For v140 and above set Target Platform Version (Project->Properties->General):
  * If v140 then select 8.1 (Note that Windows 8.1 SDK must be installed);
  * If v141 then select 10.0.17134.0 (Note that Windows 10.0.17134 SDK must be installed). 

# Bugs found with ROCALL

Making ReactOS Great Again, http://www.kernelmode.info/forum/viewtopic.php?f=11&t=5302 (Long list and explanation)

# Authors

(c) 2011 Timo Kreuzer (ReactOS Project)
(c) 2018 ROCALL Project
