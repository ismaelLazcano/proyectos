# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ismal\Documents\tarea_8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ismal\Documents\tarea_8\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tarea_8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tarea_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tarea_8.dir/flags.make

CMakeFiles/tarea_8.dir/main.cpp.obj: CMakeFiles/tarea_8.dir/flags.make
CMakeFiles/tarea_8.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ismal\Documents\tarea_8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tarea_8.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tarea_8.dir\main.cpp.obj -c C:\Users\ismal\Documents\tarea_8\main.cpp

CMakeFiles/tarea_8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tarea_8.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ismal\Documents\tarea_8\main.cpp > CMakeFiles\tarea_8.dir\main.cpp.i

CMakeFiles/tarea_8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tarea_8.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ismal\Documents\tarea_8\main.cpp -o CMakeFiles\tarea_8.dir\main.cpp.s

CMakeFiles/tarea_8.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/tarea_8.dir/main.cpp.obj.requires

CMakeFiles/tarea_8.dir/main.cpp.obj.provides: CMakeFiles/tarea_8.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\tarea_8.dir\build.make CMakeFiles/tarea_8.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/tarea_8.dir/main.cpp.obj.provides

CMakeFiles/tarea_8.dir/main.cpp.obj.provides.build: CMakeFiles/tarea_8.dir/main.cpp.obj


# Object files for target tarea_8
tarea_8_OBJECTS = \
"CMakeFiles/tarea_8.dir/main.cpp.obj"

# External object files for target tarea_8
tarea_8_EXTERNAL_OBJECTS =

tarea_8.exe: CMakeFiles/tarea_8.dir/main.cpp.obj
tarea_8.exe: CMakeFiles/tarea_8.dir/build.make
tarea_8.exe: CMakeFiles/tarea_8.dir/linklibs.rsp
tarea_8.exe: CMakeFiles/tarea_8.dir/objects1.rsp
tarea_8.exe: CMakeFiles/tarea_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ismal\Documents\tarea_8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tarea_8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tarea_8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tarea_8.dir/build: tarea_8.exe

.PHONY : CMakeFiles/tarea_8.dir/build

CMakeFiles/tarea_8.dir/requires: CMakeFiles/tarea_8.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/tarea_8.dir/requires

CMakeFiles/tarea_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tarea_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tarea_8.dir/clean

CMakeFiles/tarea_8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ismal\Documents\tarea_8 C:\Users\ismal\Documents\tarea_8 C:\Users\ismal\Documents\tarea_8\cmake-build-debug C:\Users\ismal\Documents\tarea_8\cmake-build-debug C:\Users\ismal\Documents\tarea_8\cmake-build-debug\CMakeFiles\tarea_8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tarea_8.dir/depend

