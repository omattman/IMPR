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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\AAU\IMPR03\S252O6_CartesianPlane

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR03\S252O6_CartesianPlane\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/S252O6_CartesianPlane.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/S252O6_CartesianPlane.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/S252O6_CartesianPlane.dir/flags.make

CMakeFiles/S252O6_CartesianPlane.dir/main.c.obj: CMakeFiles/S252O6_CartesianPlane.dir/flags.make
CMakeFiles/S252O6_CartesianPlane.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR03\S252O6_CartesianPlane\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/S252O6_CartesianPlane.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\S252O6_CartesianPlane.dir\main.c.obj   -c C:\AAU\IMPR03\S252O6_CartesianPlane\main.c

CMakeFiles/S252O6_CartesianPlane.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/S252O6_CartesianPlane.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR03\S252O6_CartesianPlane\main.c > CMakeFiles\S252O6_CartesianPlane.dir\main.c.i

CMakeFiles/S252O6_CartesianPlane.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/S252O6_CartesianPlane.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR03\S252O6_CartesianPlane\main.c -o CMakeFiles\S252O6_CartesianPlane.dir\main.c.s

# Object files for target S252O6_CartesianPlane
S252O6_CartesianPlane_OBJECTS = \
"CMakeFiles/S252O6_CartesianPlane.dir/main.c.obj"

# External object files for target S252O6_CartesianPlane
S252O6_CartesianPlane_EXTERNAL_OBJECTS =

S252O6_CartesianPlane.exe: CMakeFiles/S252O6_CartesianPlane.dir/main.c.obj
S252O6_CartesianPlane.exe: CMakeFiles/S252O6_CartesianPlane.dir/build.make
S252O6_CartesianPlane.exe: CMakeFiles/S252O6_CartesianPlane.dir/linklibs.rsp
S252O6_CartesianPlane.exe: CMakeFiles/S252O6_CartesianPlane.dir/objects1.rsp
S252O6_CartesianPlane.exe: CMakeFiles/S252O6_CartesianPlane.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR03\S252O6_CartesianPlane\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable S252O6_CartesianPlane.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\S252O6_CartesianPlane.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/S252O6_CartesianPlane.dir/build: S252O6_CartesianPlane.exe

.PHONY : CMakeFiles/S252O6_CartesianPlane.dir/build

CMakeFiles/S252O6_CartesianPlane.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\S252O6_CartesianPlane.dir\cmake_clean.cmake
.PHONY : CMakeFiles/S252O6_CartesianPlane.dir/clean

CMakeFiles/S252O6_CartesianPlane.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR03\S252O6_CartesianPlane C:\AAU\IMPR03\S252O6_CartesianPlane C:\AAU\IMPR03\S252O6_CartesianPlane\cmake-build-debug C:\AAU\IMPR03\S252O6_CartesianPlane\cmake-build-debug C:\AAU\IMPR03\S252O6_CartesianPlane\cmake-build-debug\CMakeFiles\S252O6_CartesianPlane.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/S252O6_CartesianPlane.dir/depend

