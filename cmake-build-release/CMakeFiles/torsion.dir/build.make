# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/alfonso/clion-2019.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/alfonso/clion-2019.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alfonso/CLionProjects/Torsion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alfonso/CLionProjects/Torsion/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/torsion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/torsion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/torsion.dir/flags.make

CMakeFiles/torsion.dir/main.cpp.o: CMakeFiles/torsion.dir/flags.make
CMakeFiles/torsion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alfonso/CLionProjects/Torsion/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/torsion.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/torsion.dir/main.cpp.o -c /home/alfonso/CLionProjects/Torsion/main.cpp

CMakeFiles/torsion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/torsion.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alfonso/CLionProjects/Torsion/main.cpp > CMakeFiles/torsion.dir/main.cpp.i

CMakeFiles/torsion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/torsion.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alfonso/CLionProjects/Torsion/main.cpp -o CMakeFiles/torsion.dir/main.cpp.s

CMakeFiles/torsion.dir/DBOper.cpp.o: CMakeFiles/torsion.dir/flags.make
CMakeFiles/torsion.dir/DBOper.cpp.o: ../DBOper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alfonso/CLionProjects/Torsion/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/torsion.dir/DBOper.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/torsion.dir/DBOper.cpp.o -c /home/alfonso/CLionProjects/Torsion/DBOper.cpp

CMakeFiles/torsion.dir/DBOper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/torsion.dir/DBOper.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alfonso/CLionProjects/Torsion/DBOper.cpp > CMakeFiles/torsion.dir/DBOper.cpp.i

CMakeFiles/torsion.dir/DBOper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/torsion.dir/DBOper.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alfonso/CLionProjects/Torsion/DBOper.cpp -o CMakeFiles/torsion.dir/DBOper.cpp.s

CMakeFiles/torsion.dir/TorsionI.cpp.o: CMakeFiles/torsion.dir/flags.make
CMakeFiles/torsion.dir/TorsionI.cpp.o: ../TorsionI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alfonso/CLionProjects/Torsion/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/torsion.dir/TorsionI.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/torsion.dir/TorsionI.cpp.o -c /home/alfonso/CLionProjects/Torsion/TorsionI.cpp

CMakeFiles/torsion.dir/TorsionI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/torsion.dir/TorsionI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alfonso/CLionProjects/Torsion/TorsionI.cpp > CMakeFiles/torsion.dir/TorsionI.cpp.i

CMakeFiles/torsion.dir/TorsionI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/torsion.dir/TorsionI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alfonso/CLionProjects/Torsion/TorsionI.cpp -o CMakeFiles/torsion.dir/TorsionI.cpp.s

CMakeFiles/torsion.dir/Diccionario.cpp.o: CMakeFiles/torsion.dir/flags.make
CMakeFiles/torsion.dir/Diccionario.cpp.o: ../Diccionario.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alfonso/CLionProjects/Torsion/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/torsion.dir/Diccionario.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/torsion.dir/Diccionario.cpp.o -c /home/alfonso/CLionProjects/Torsion/Diccionario.cpp

CMakeFiles/torsion.dir/Diccionario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/torsion.dir/Diccionario.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alfonso/CLionProjects/Torsion/Diccionario.cpp > CMakeFiles/torsion.dir/Diccionario.cpp.i

CMakeFiles/torsion.dir/Diccionario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/torsion.dir/Diccionario.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alfonso/CLionProjects/Torsion/Diccionario.cpp -o CMakeFiles/torsion.dir/Diccionario.cpp.s

# Object files for target torsion
torsion_OBJECTS = \
"CMakeFiles/torsion.dir/main.cpp.o" \
"CMakeFiles/torsion.dir/DBOper.cpp.o" \
"CMakeFiles/torsion.dir/TorsionI.cpp.o" \
"CMakeFiles/torsion.dir/Diccionario.cpp.o"

# External object files for target torsion
torsion_EXTERNAL_OBJECTS =

torsion: CMakeFiles/torsion.dir/main.cpp.o
torsion: CMakeFiles/torsion.dir/DBOper.cpp.o
torsion: CMakeFiles/torsion.dir/TorsionI.cpp.o
torsion: CMakeFiles/torsion.dir/Diccionario.cpp.o
torsion: CMakeFiles/torsion.dir/build.make
torsion: CMakeFiles/torsion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alfonso/CLionProjects/Torsion/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable torsion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/torsion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/torsion.dir/build: torsion

.PHONY : CMakeFiles/torsion.dir/build

CMakeFiles/torsion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/torsion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/torsion.dir/clean

CMakeFiles/torsion.dir/depend:
	cd /home/alfonso/CLionProjects/Torsion/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alfonso/CLionProjects/Torsion /home/alfonso/CLionProjects/Torsion /home/alfonso/CLionProjects/Torsion/cmake-build-release /home/alfonso/CLionProjects/Torsion/cmake-build-release /home/alfonso/CLionProjects/Torsion/cmake-build-release/CMakeFiles/torsion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/torsion.dir/depend

