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
CMAKE_SOURCE_DIR = C:\AAU\IMPR\AO4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR\AO4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AO42.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AO42.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AO42.dir/flags.make

CMakeFiles/AO42.dir/disc-root-calculations.c.obj: CMakeFiles/AO42.dir/flags.make
CMakeFiles/AO42.dir/disc-root-calculations.c.obj: ../disc-root-calculations.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR\AO4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/AO42.dir/disc-root-calculations.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\AO42.dir\disc-root-calculations.c.obj   -c C:\AAU\IMPR\AO4\disc-root-calculations.c

CMakeFiles/AO42.dir/disc-root-calculations.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AO42.dir/disc-root-calculations.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR\AO4\disc-root-calculations.c > CMakeFiles\AO42.dir\disc-root-calculations.c.i

CMakeFiles/AO42.dir/disc-root-calculations.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AO42.dir/disc-root-calculations.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR\AO4\disc-root-calculations.c -o CMakeFiles\AO42.dir\disc-root-calculations.c.s

# Object files for target AO42
AO42_OBJECTS = \
"CMakeFiles/AO42.dir/disc-root-calculations.c.obj"

# External object files for target AO42
AO42_EXTERNAL_OBJECTS =

AO42.exe: CMakeFiles/AO42.dir/disc-root-calculations.c.obj
AO42.exe: CMakeFiles/AO42.dir/build.make
AO42.exe: CMakeFiles/AO42.dir/linklibs.rsp
AO42.exe: CMakeFiles/AO42.dir/objects1.rsp
AO42.exe: CMakeFiles/AO42.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR\AO4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable AO42.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AO42.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AO42.dir/build: AO42.exe

.PHONY : CMakeFiles/AO42.dir/build

CMakeFiles/AO42.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AO42.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AO42.dir/clean

CMakeFiles/AO42.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR\AO4 C:\AAU\IMPR\AO4 C:\AAU\IMPR\AO4\cmake-build-debug C:\AAU\IMPR\AO4\cmake-build-debug C:\AAU\IMPR\AO4\cmake-build-debug\CMakeFiles\AO42.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AO42.dir/depend
