# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\Programms\Clion\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Programms\Clion\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\we\Desktop\Bank Mangement"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\we\Desktop\Bank Mangement\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bank_Mangement.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bank_Mangement.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bank_Mangement.dir/flags.make

CMakeFiles/Bank_Mangement.dir/main.cpp.obj: CMakeFiles/Bank_Mangement.dir/flags.make
CMakeFiles/Bank_Mangement.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\we\Desktop\Bank Mangement\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bank_Mangement.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Bank_Mangement.dir\main.cpp.obj -c "C:\Users\we\Desktop\Bank Mangement\main.cpp"

CMakeFiles/Bank_Mangement.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bank_Mangement.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\we\Desktop\Bank Mangement\main.cpp" > CMakeFiles\Bank_Mangement.dir\main.cpp.i

CMakeFiles/Bank_Mangement.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bank_Mangement.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\we\Desktop\Bank Mangement\main.cpp" -o CMakeFiles\Bank_Mangement.dir\main.cpp.s

# Object files for target Bank_Mangement
Bank_Mangement_OBJECTS = \
"CMakeFiles/Bank_Mangement.dir/main.cpp.obj"

# External object files for target Bank_Mangement
Bank_Mangement_EXTERNAL_OBJECTS =

Bank_Mangement.exe: CMakeFiles/Bank_Mangement.dir/main.cpp.obj
Bank_Mangement.exe: CMakeFiles/Bank_Mangement.dir/build.make
Bank_Mangement.exe: CMakeFiles/Bank_Mangement.dir/linklibs.rsp
Bank_Mangement.exe: CMakeFiles/Bank_Mangement.dir/objects1.rsp
Bank_Mangement.exe: CMakeFiles/Bank_Mangement.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\we\Desktop\Bank Mangement\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Bank_Mangement.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bank_Mangement.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bank_Mangement.dir/build: Bank_Mangement.exe

.PHONY : CMakeFiles/Bank_Mangement.dir/build

CMakeFiles/Bank_Mangement.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bank_Mangement.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bank_Mangement.dir/clean

CMakeFiles/Bank_Mangement.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\we\Desktop\Bank Mangement" "C:\Users\we\Desktop\Bank Mangement" "C:\Users\we\Desktop\Bank Mangement\cmake-build-debug" "C:\Users\we\Desktop\Bank Mangement\cmake-build-debug" "C:\Users\we\Desktop\Bank Mangement\cmake-build-debug\CMakeFiles\Bank_Mangement.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bank_Mangement.dir/depend
