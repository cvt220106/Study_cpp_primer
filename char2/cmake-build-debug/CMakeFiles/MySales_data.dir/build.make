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
CMAKE_SOURCE_DIR = F:\cpp_code\Study_c-_primer\char2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\cpp_code\Study_c-_primer\char2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MySales_data.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MySales_data.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MySales_data.dir/flags.make

CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.obj: CMakeFiles/MySales_data.dir/flags.make
CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.obj: CMakeFiles/MySales_data.dir/includes_CXX.rsp
CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.obj: ../2.6CustomDataType/MySales_data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\cpp_code\Study_c-_primer\char2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.obj"
	E:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MySales_data.dir\2.6CustomDataType\MySales_data.cpp.obj -c F:\cpp_code\Study_c-_primer\char2\2.6CustomDataType\MySales_data.cpp

CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.i"
	E:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\cpp_code\Study_c-_primer\char2\2.6CustomDataType\MySales_data.cpp > CMakeFiles\MySales_data.dir\2.6CustomDataType\MySales_data.cpp.i

CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.s"
	E:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\cpp_code\Study_c-_primer\char2\2.6CustomDataType\MySales_data.cpp -o CMakeFiles\MySales_data.dir\2.6CustomDataType\MySales_data.cpp.s

# Object files for target MySales_data
MySales_data_OBJECTS = \
"CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.obj"

# External object files for target MySales_data
MySales_data_EXTERNAL_OBJECTS =

MySales_data.exe: CMakeFiles/MySales_data.dir/2.6CustomDataType/MySales_data.cpp.obj
MySales_data.exe: CMakeFiles/MySales_data.dir/build.make
MySales_data.exe: CMakeFiles/MySales_data.dir/linklibs.rsp
MySales_data.exe: CMakeFiles/MySales_data.dir/objects1.rsp
MySales_data.exe: CMakeFiles/MySales_data.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\cpp_code\Study_c-_primer\char2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MySales_data.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MySales_data.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MySales_data.dir/build: MySales_data.exe

.PHONY : CMakeFiles/MySales_data.dir/build

CMakeFiles/MySales_data.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MySales_data.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MySales_data.dir/clean

CMakeFiles/MySales_data.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\cpp_code\Study_c-_primer\char2 F:\cpp_code\Study_c-_primer\char2 F:\cpp_code\Study_c-_primer\char2\cmake-build-debug F:\cpp_code\Study_c-_primer\char2\cmake-build-debug F:\cpp_code\Study_c-_primer\char2\cmake-build-debug\CMakeFiles\MySales_data.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MySales_data.dir/depend

