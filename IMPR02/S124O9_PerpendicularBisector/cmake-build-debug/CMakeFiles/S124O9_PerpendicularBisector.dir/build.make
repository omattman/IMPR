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
CMAKE_SOURCE_DIR = C:\AAU\IMPR02\S124O9_PerpendicularBisector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR02\S124O9_PerpendicularBisector\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/S124O9_PerpendicularBisector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/S124O9_PerpendicularBisector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/S124O9_PerpendicularBisector.dir/flags.make

CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.obj: CMakeFiles/S124O9_PerpendicularBisector.dir/flags.make
CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR02\S124O9_PerpendicularBisector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\S124O9_PerpendicularBisector.dir\main.c.obj   -c C:\AAU\IMPR02\S124O9_PerpendicularBisector\main.c

CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR02\S124O9_PerpendicularBisector\main.c > CMakeFiles\S124O9_PerpendicularBisector.dir\main.c.i

CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR02\S124O9_PerpendicularBisector\main.c -o CMakeFiles\S124O9_PerpendicularBisector.dir\main.c.s

# Object files for target S124O9_PerpendicularBisector
S124O9_PerpendicularBisector_OBJECTS = \
"CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.obj"

# External object files for target S124O9_PerpendicularBisector
S124O9_PerpendicularBisector_EXTERNAL_OBJECTS =

S124O9_PerpendicularBisector.exe: CMakeFiles/S124O9_PerpendicularBisector.dir/main.c.obj
S124O9_PerpendicularBisector.exe: CMakeFiles/S124O9_PerpendicularBisector.dir/build.make
S124O9_PerpendicularBisector.exe: CMakeFiles/S124O9_PerpendicularBisector.dir/linklibs.rsp
S124O9_PerpendicularBisector.exe: CMakeFiles/S124O9_PerpendicularBisector.dir/objects1.rsp
S124O9_PerpendicularBisector.exe: CMakeFiles/S124O9_PerpendicularBisector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR02\S124O9_PerpendicularBisector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable S124O9_PerpendicularBisector.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\S124O9_PerpendicularBisector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/S124O9_PerpendicularBisector.dir/build: S124O9_PerpendicularBisector.exe

.PHONY : CMakeFiles/S124O9_PerpendicularBisector.dir/build

CMakeFiles/S124O9_PerpendicularBisector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\S124O9_PerpendicularBisector.dir\cmake_clean.cmake
.PHONY : CMakeFiles/S124O9_PerpendicularBisector.dir/clean

CMakeFiles/S124O9_PerpendicularBisector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR02\S124O9_PerpendicularBisector C:\AAU\IMPR02\S124O9_PerpendicularBisector C:\AAU\IMPR02\S124O9_PerpendicularBisector\cmake-build-debug C:\AAU\IMPR02\S124O9_PerpendicularBisector\cmake-build-debug C:\AAU\IMPR02\S124O9_PerpendicularBisector\cmake-build-debug\CMakeFiles\S124O9_PerpendicularBisector.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/S124O9_PerpendicularBisector.dir/depend

