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
CMAKE_COMMAND = C:\CLion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\CLion\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Bataille.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bataille.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bataille.dir/flags.make

CMakeFiles/Bataille.dir/main.c.obj: CMakeFiles/Bataille.dir/flags.make
CMakeFiles/Bataille.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Bataille.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Bataille.dir\main.c.obj   -c C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\main.c

CMakeFiles/Bataille.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bataille.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\main.c > CMakeFiles\Bataille.dir\main.c.i

CMakeFiles/Bataille.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bataille.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\main.c -o CMakeFiles\Bataille.dir\main.c.s

# Object files for target Bataille
Bataille_OBJECTS = \
"CMakeFiles/Bataille.dir/main.c.obj"

# External object files for target Bataille
Bataille_EXTERNAL_OBJECTS =

Bataille.exe: CMakeFiles/Bataille.dir/main.c.obj
Bataille.exe: CMakeFiles/Bataille.dir/build.make
Bataille.exe: CMakeFiles/Bataille.dir/linklibs.rsp
Bataille.exe: CMakeFiles/Bataille.dir/objects1.rsp
Bataille.exe: CMakeFiles/Bataille.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Bataille.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bataille.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bataille.dir/build: Bataille.exe

.PHONY : CMakeFiles/Bataille.dir/build

CMakeFiles/Bataille.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bataille.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bataille.dir/clean

CMakeFiles/Bataille.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\cmake-build-debug C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\cmake-build-debug C:\Users\Tiago.SANTOS\Desktop\Bataille\Bataille\cmake-build-debug\CMakeFiles\Bataille.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bataille.dir/depend

