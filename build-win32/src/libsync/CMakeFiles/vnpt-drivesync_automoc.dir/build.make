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

# Utility rule file for vnpt-drivesync_automoc.

# Include the progress variables for this target.
include src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/progress.make

src/libsync/CMakeFiles/vnpt-drivesync_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vanquan/client/build-win32/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target vnpt-drivesync"
	cd /home/vanquan/client/build-win32/src/libsync && /usr/bin/cmake -E cmake_autogen /home/vanquan/client/build-win32/src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/ ""

vnpt-drivesync_automoc: src/libsync/CMakeFiles/vnpt-drivesync_automoc
vnpt-drivesync_automoc: src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/build.make

.PHONY : vnpt-drivesync_automoc

# Rule to build all files generated by this target.
src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/build: vnpt-drivesync_automoc

.PHONY : src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/build

src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/clean:
	cd /home/vanquan/client/build-win32/src/libsync && $(CMAKE_COMMAND) -P CMakeFiles/vnpt-drivesync_automoc.dir/cmake_clean.cmake
.PHONY : src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/clean

src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/depend:
	cd /home/vanquan/client/build-win32 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vanquan/client /home/vanquan/client/src/libsync /home/vanquan/client/build-win32 /home/vanquan/client/build-win32/src/libsync /home/vanquan/client/build-win32/src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/libsync/CMakeFiles/vnpt-drivesync_automoc.dir/depend
