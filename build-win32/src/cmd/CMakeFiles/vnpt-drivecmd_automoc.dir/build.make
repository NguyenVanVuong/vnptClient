# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vanquan/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vanquan/client/build-win32

# Utility rule file for vnpt-drivecmd_automoc.

# Include the progress variables for this target.
include src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/progress.make

src/cmd/CMakeFiles/vnpt-drivecmd_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vanquan/client/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target vnpt-drivecmd"
	cd /home/vanquan/client/build-win32/src/cmd && /usr/bin/cmake -E cmake_autogen /home/vanquan/client/build-win32/src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/ ""

vnpt-drivecmd_automoc: src/cmd/CMakeFiles/vnpt-drivecmd_automoc
vnpt-drivecmd_automoc: src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/build.make

.PHONY : vnpt-drivecmd_automoc

# Rule to build all files generated by this target.
src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/build: vnpt-drivecmd_automoc

.PHONY : src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/build

src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/clean:
	cd /home/vanquan/client/build-win32/src/cmd && $(CMAKE_COMMAND) -P CMakeFiles/vnpt-drivecmd_automoc.dir/cmake_clean.cmake
.PHONY : src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/clean

src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/depend:
	cd /home/vanquan/client/build-win32 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vanquan/client /home/vanquan/client/src/cmd /home/vanquan/client/build-win32 /home/vanquan/client/build-win32/src/cmd /home/vanquan/client/build-win32/src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cmd/CMakeFiles/vnpt-drivecmd_automoc.dir/depend

