# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\cpp_code\Study_cpp_primer\chap4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\cpp_code\Study_cpp_primer\chap4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4.4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4.4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4.4.dir/flags.make

CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.obj: CMakeFiles/4.4.dir/flags.make
CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.obj: ../4.4AssignmentOperator/study.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\cpp_code\Study_cpp_primer\chap4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.obj"
	E:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\4.4.dir\4.4AssignmentOperator\study.cpp.obj -c F:\cpp_code\Study_cpp_primer\chap4\4.4AssignmentOperator\study.cpp

CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.i"
	E:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\cpp_code\Study_cpp_primer\chap4\4.4AssignmentOperator\study.cpp > CMakeFiles\4.4.dir\4.4AssignmentOperator\study.cpp.i

CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.s"
	E:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\cpp_code\Study_cpp_primer\chap4\4.4AssignmentOperator\study.cpp -o CMakeFiles\4.4.dir\4.4AssignmentOperator\study.cpp.s

# Object files for target 4.4
4_4_OBJECTS = \
"CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.obj"

# External object files for target 4.4
4_4_EXTERNAL_OBJECTS =

4.4.exe: CMakeFiles/4.4.dir/4.4AssignmentOperator/study.cpp.obj
4.4.exe: CMakeFiles/4.4.dir/build.make
4.4.exe: CMakeFiles/4.4.dir/linklibs.rsp
4.4.exe: CMakeFiles/4.4.dir/objects1.rsp
4.4.exe: CMakeFiles/4.4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\cpp_code\Study_cpp_primer\chap4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4.4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\4.4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4.4.dir/build: 4.4.exe

.PHONY : CMakeFiles/4.4.dir/build

CMakeFiles/4.4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\4.4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/4.4.dir/clean

CMakeFiles/4.4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\cpp_code\Study_cpp_primer\chap4 F:\cpp_code\Study_cpp_primer\chap4 F:\cpp_code\Study_cpp_primer\chap4\cmake-build-debug F:\cpp_code\Study_cpp_primer\chap4\cmake-build-debug F:\cpp_code\Study_cpp_primer\chap4\cmake-build-debug\CMakeFiles\4.4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4.4.dir/depend

