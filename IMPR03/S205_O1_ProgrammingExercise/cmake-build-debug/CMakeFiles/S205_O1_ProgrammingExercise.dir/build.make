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
CMAKE_SOURCE_DIR = C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/S205_O1_ProgrammingExercise.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/S205_O1_ProgrammingExercise.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/S205_O1_ProgrammingExercise.dir/flags.make

CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.obj: CMakeFiles/S205_O1_ProgrammingExercise.dir/flags.make
CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\S205_O1_ProgrammingExercise.dir\main.c.obj   -c C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\main.c

CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\main.c > CMakeFiles\S205_O1_ProgrammingExercise.dir\main.c.i

CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\main.c -o CMakeFiles\S205_O1_ProgrammingExercise.dir\main.c.s

# Object files for target S205_O1_ProgrammingExercise
S205_O1_ProgrammingExercise_OBJECTS = \
"CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.obj"

# External object files for target S205_O1_ProgrammingExercise
S205_O1_ProgrammingExercise_EXTERNAL_OBJECTS =

S205_O1_ProgrammingExercise.exe: CMakeFiles/S205_O1_ProgrammingExercise.dir/main.c.obj
S205_O1_ProgrammingExercise.exe: CMakeFiles/S205_O1_ProgrammingExercise.dir/build.make
S205_O1_ProgrammingExercise.exe: CMakeFiles/S205_O1_ProgrammingExercise.dir/linklibs.rsp
S205_O1_ProgrammingExercise.exe: CMakeFiles/S205_O1_ProgrammingExercise.dir/objects1.rsp
S205_O1_ProgrammingExercise.exe: CMakeFiles/S205_O1_ProgrammingExercise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable S205_O1_ProgrammingExercise.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\S205_O1_ProgrammingExercise.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/S205_O1_ProgrammingExercise.dir/build: S205_O1_ProgrammingExercise.exe

.PHONY : CMakeFiles/S205_O1_ProgrammingExercise.dir/build

CMakeFiles/S205_O1_ProgrammingExercise.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\S205_O1_ProgrammingExercise.dir\cmake_clean.cmake
.PHONY : CMakeFiles/S205_O1_ProgrammingExercise.dir/clean

CMakeFiles/S205_O1_ProgrammingExercise.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\cmake-build-debug C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\cmake-build-debug C:\AAU\IMPR\IMPR03\S205_O1_ProgrammingExercise\cmake-build-debug\CMakeFiles\S205_O1_ProgrammingExercise.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/S205_O1_ProgrammingExercise.dir/depend

