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
CMAKE_SOURCE_DIR = C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/S242_O1_SelfCheck.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/S242_O1_SelfCheck.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/S242_O1_SelfCheck.dir/flags.make

CMakeFiles/S242_O1_SelfCheck.dir/main.c.obj: CMakeFiles/S242_O1_SelfCheck.dir/flags.make
CMakeFiles/S242_O1_SelfCheck.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/S242_O1_SelfCheck.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\S242_O1_SelfCheck.dir\main.c.obj   -c C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\main.c

CMakeFiles/S242_O1_SelfCheck.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/S242_O1_SelfCheck.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\main.c > CMakeFiles\S242_O1_SelfCheck.dir\main.c.i

CMakeFiles/S242_O1_SelfCheck.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/S242_O1_SelfCheck.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\main.c -o CMakeFiles\S242_O1_SelfCheck.dir\main.c.s

# Object files for target S242_O1_SelfCheck
S242_O1_SelfCheck_OBJECTS = \
"CMakeFiles/S242_O1_SelfCheck.dir/main.c.obj"

# External object files for target S242_O1_SelfCheck
S242_O1_SelfCheck_EXTERNAL_OBJECTS =

S242_O1_SelfCheck.exe: CMakeFiles/S242_O1_SelfCheck.dir/main.c.obj
S242_O1_SelfCheck.exe: CMakeFiles/S242_O1_SelfCheck.dir/build.make
S242_O1_SelfCheck.exe: CMakeFiles/S242_O1_SelfCheck.dir/linklibs.rsp
S242_O1_SelfCheck.exe: CMakeFiles/S242_O1_SelfCheck.dir/objects1.rsp
S242_O1_SelfCheck.exe: CMakeFiles/S242_O1_SelfCheck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable S242_O1_SelfCheck.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\S242_O1_SelfCheck.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/S242_O1_SelfCheck.dir/build: S242_O1_SelfCheck.exe

.PHONY : CMakeFiles/S242_O1_SelfCheck.dir/build

CMakeFiles/S242_O1_SelfCheck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\S242_O1_SelfCheck.dir\cmake_clean.cmake
.PHONY : CMakeFiles/S242_O1_SelfCheck.dir/clean

CMakeFiles/S242_O1_SelfCheck.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\cmake-build-debug C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\cmake-build-debug C:\AAU\IMPR\IMPR03\S242_O1_SelfCheck\cmake-build-debug\CMakeFiles\S242_O1_SelfCheck.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/S242_O1_SelfCheck.dir/depend

