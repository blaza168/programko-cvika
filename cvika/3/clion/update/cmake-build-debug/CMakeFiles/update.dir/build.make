# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/jan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.7319.72/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.7319.72/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/update.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/update.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/update.dir/flags.make

CMakeFiles/update.dir/main.cpp.o: CMakeFiles/update.dir/flags.make
CMakeFiles/update.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/update.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/update.dir/main.cpp.o -c /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/main.cpp

CMakeFiles/update.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/update.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/main.cpp > CMakeFiles/update.dir/main.cpp.i

CMakeFiles/update.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/update.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/main.cpp -o CMakeFiles/update.dir/main.cpp.s

# Object files for target update
update_OBJECTS = \
"CMakeFiles/update.dir/main.cpp.o"

# External object files for target update
update_EXTERNAL_OBJECTS =

update: CMakeFiles/update.dir/main.cpp.o
update: CMakeFiles/update.dir/build.make
update: CMakeFiles/update.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable update"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/update.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/update.dir/build: update

.PHONY : CMakeFiles/update.dir/build

CMakeFiles/update.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/update.dir/cmake_clean.cmake
.PHONY : CMakeFiles/update.dir/clean

CMakeFiles/update.dir/depend:
	cd /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug /home/jan/Desktop/directory/school/1/programko/cvika/3/clion/update/cmake-build-debug/CMakeFiles/update.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/update.dir/depend

