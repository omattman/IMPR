# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/O4_3_SumAfTalInterval.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/O4_3_SumAfTalInterval.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/O4_3_SumAfTalInterval.dir/flags.make

CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.obj: CMakeFiles/O4_3_SumAfTalInterval.dir/flags.make
CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\O4_3_SumAfTalInterval.dir\main.c.obj   -c C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\main.c

CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\main.c > CMakeFiles\O4_3_SumAfTalInterval.dir\main.c.i

CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\main.c -o CMakeFiles\O4_3_SumAfTalInterval.dir\main.c.s

# Object files for target O4_3_SumAfTalInterval
O4_3_SumAfTalInterval_OBJECTS = \
"CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.obj"

# External object files for target O4_3_SumAfTalInterval
O4_3_SumAfTalInterval_EXTERNAL_OBJECTS =

O4_3_SumAfTalInterval.exe: CMakeFiles/O4_3_SumAfTalInterval.dir/main.c.obj
O4_3_SumAfTalInterval.exe: CMakeFiles/O4_3_SumAfTalInterval.dir/build.make
O4_3_SumAfTalInterval.exe: CMakeFiles/O4_3_SumAfTalInterval.dir/linklibs.rsp
O4_3_SumAfTalInterval.exe: CMakeFiles/O4_3_SumAfTalInterval.dir/objects1.rsp
O4_3_SumAfTalInterval.exe: CMakeFiles/O4_3_SumAfTalInterval.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable O4_3_SumAfTalInterval.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\O4_3_SumAfTalInterval.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/O4_3_SumAfTalInterval.dir/build: O4_3_SumAfTalInterval.exe

.PHONY : CMakeFiles/O4_3_SumAfTalInterval.dir/build

CMakeFiles/O4_3_SumAfTalInterval.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\O4_3_SumAfTalInterval.dir\cmake_clean.cmake
.PHONY : CMakeFiles/O4_3_SumAfTalInterval.dir/clean

CMakeFiles/O4_3_SumAfTalInterval.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\cmake-build-debug C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\cmake-build-debug C:\AAU\IMPR\IMPR04\O4_3_SumAfTalInterval\cmake-build-debug\CMakeFiles\O4_3_SumAfTalInterval.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/O4_3_SumAfTalInterval.dir/depend

