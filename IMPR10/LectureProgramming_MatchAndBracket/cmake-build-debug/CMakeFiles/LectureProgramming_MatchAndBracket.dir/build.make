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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LectureProgramming_MatchAndBracket.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LectureProgramming_MatchAndBracket.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LectureProgramming_MatchAndBracket.dir/flags.make

CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.obj: CMakeFiles/LectureProgramming_MatchAndBracket.dir/flags.make
CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LectureProgramming_MatchAndBracket.dir\main.c.obj   -c C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\main.c

CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\main.c > CMakeFiles\LectureProgramming_MatchAndBracket.dir\main.c.i

CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\main.c -o CMakeFiles\LectureProgramming_MatchAndBracket.dir\main.c.s

# Object files for target LectureProgramming_MatchAndBracket
LectureProgramming_MatchAndBracket_OBJECTS = \
"CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.obj"

# External object files for target LectureProgramming_MatchAndBracket
LectureProgramming_MatchAndBracket_EXTERNAL_OBJECTS =

LectureProgramming_MatchAndBracket.exe: CMakeFiles/LectureProgramming_MatchAndBracket.dir/main.c.obj
LectureProgramming_MatchAndBracket.exe: CMakeFiles/LectureProgramming_MatchAndBracket.dir/build.make
LectureProgramming_MatchAndBracket.exe: CMakeFiles/LectureProgramming_MatchAndBracket.dir/linklibs.rsp
LectureProgramming_MatchAndBracket.exe: CMakeFiles/LectureProgramming_MatchAndBracket.dir/objects1.rsp
LectureProgramming_MatchAndBracket.exe: CMakeFiles/LectureProgramming_MatchAndBracket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LectureProgramming_MatchAndBracket.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LectureProgramming_MatchAndBracket.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LectureProgramming_MatchAndBracket.dir/build: LectureProgramming_MatchAndBracket.exe

.PHONY : CMakeFiles/LectureProgramming_MatchAndBracket.dir/build

CMakeFiles/LectureProgramming_MatchAndBracket.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LectureProgramming_MatchAndBracket.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LectureProgramming_MatchAndBracket.dir/clean

CMakeFiles/LectureProgramming_MatchAndBracket.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\cmake-build-debug C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\cmake-build-debug C:\AAU\IMPR\IMPR10\LectureProgramming_MatchAndBracket\cmake-build-debug\CMakeFiles\LectureProgramming_MatchAndBracket.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LectureProgramming_MatchAndBracket.dir/depend

