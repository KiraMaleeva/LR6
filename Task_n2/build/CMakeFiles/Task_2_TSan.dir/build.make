# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build"

# Include any dependencies generated for this target.
include CMakeFiles/Task_2_TSan.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Task_2_TSan.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Task_2_TSan.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_2_TSan.dir/flags.make

CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o: CMakeFiles/Task_2_TSan.dir/flags.make
CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o: /home/kira/Kira\ Maleeva/453501/ОАиП/LR6/Task_n2/Task_2.cpp
CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o: CMakeFiles/Task_2_TSan.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o -MF CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o.d -o CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o -c "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/Task_2.cpp"

CMakeFiles/Task_2_TSan.dir/Task_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task_2_TSan.dir/Task_2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/Task_2.cpp" > CMakeFiles/Task_2_TSan.dir/Task_2.cpp.i

CMakeFiles/Task_2_TSan.dir/Task_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task_2_TSan.dir/Task_2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/Task_2.cpp" -o CMakeFiles/Task_2_TSan.dir/Task_2.cpp.s

# Object files for target Task_2_TSan
Task_2_TSan_OBJECTS = \
"CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o"

# External object files for target Task_2_TSan
Task_2_TSan_EXTERNAL_OBJECTS =

Task_2_TSan: CMakeFiles/Task_2_TSan.dir/Task_2.cpp.o
Task_2_TSan: CMakeFiles/Task_2_TSan.dir/build.make
Task_2_TSan: CMakeFiles/Task_2_TSan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task_2_TSan"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task_2_TSan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_2_TSan.dir/build: Task_2_TSan
.PHONY : CMakeFiles/Task_2_TSan.dir/build

CMakeFiles/Task_2_TSan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task_2_TSan.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task_2_TSan.dir/clean

CMakeFiles/Task_2_TSan.dir/depend:
	cd "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2" "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2" "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build" "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build" "/home/kira/Kira Maleeva/453501/ОАиП/LR6/Task_n2/build/CMakeFiles/Task_2_TSan.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Task_2_TSan.dir/depend

