# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sama\Desktop\GameCharacter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sama\Desktop\GameCharacter\build

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/codegen:
.PHONY : CMakeFiles/game.dir/codegen

CMakeFiles/game.dir/main.cpp.obj: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/main.cpp.obj: C:/Users/sama/Desktop/GameCharacter/main.cpp
CMakeFiles/game.dir/main.cpp.obj: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\sama\Desktop\GameCharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/main.cpp.obj -MF CMakeFiles\game.dir\main.cpp.obj.d -o CMakeFiles\game.dir\main.cpp.obj -c C:\Users\sama\Desktop\GameCharacter\main.cpp

CMakeFiles/game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/game.dir/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sama\Desktop\GameCharacter\main.cpp > CMakeFiles\game.dir\main.cpp.i

CMakeFiles/game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/game.dir/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sama\Desktop\GameCharacter\main.cpp -o CMakeFiles\game.dir\main.cpp.s

CMakeFiles/game.dir/character.cpp.obj: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/character.cpp.obj: C:/Users/sama/Desktop/GameCharacter/character.cpp
CMakeFiles/game.dir/character.cpp.obj: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\sama\Desktop\GameCharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/character.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/character.cpp.obj -MF CMakeFiles\game.dir\character.cpp.obj.d -o CMakeFiles\game.dir\character.cpp.obj -c C:\Users\sama\Desktop\GameCharacter\character.cpp

CMakeFiles/game.dir/character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/game.dir/character.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sama\Desktop\GameCharacter\character.cpp > CMakeFiles\game.dir\character.cpp.i

CMakeFiles/game.dir/character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/game.dir/character.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sama\Desktop\GameCharacter\character.cpp -o CMakeFiles\game.dir\character.cpp.s

CMakeFiles/game.dir/game.cpp.obj: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/game.cpp.obj: C:/Users/sama/Desktop/GameCharacter/game.cpp
CMakeFiles/game.dir/game.cpp.obj: CMakeFiles/game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\sama\Desktop\GameCharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/game.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game.dir/game.cpp.obj -MF CMakeFiles\game.dir\game.cpp.obj.d -o CMakeFiles\game.dir\game.cpp.obj -c C:\Users\sama\Desktop\GameCharacter\game.cpp

CMakeFiles/game.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/game.dir/game.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sama\Desktop\GameCharacter\game.cpp > CMakeFiles\game.dir\game.cpp.i

CMakeFiles/game.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/game.dir/game.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sama\Desktop\GameCharacter\game.cpp -o CMakeFiles\game.dir\game.cpp.s

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/main.cpp.obj" \
"CMakeFiles/game.dir/character.cpp.obj" \
"CMakeFiles/game.dir/game.cpp.obj"

# External object files for target game
game_EXTERNAL_OBJECTS =

game.exe: CMakeFiles/game.dir/main.cpp.obj
game.exe: CMakeFiles/game.dir/character.cpp.obj
game.exe: CMakeFiles/game.dir/game.cpp.obj
game.exe: CMakeFiles/game.dir/build.make
game.exe: CMakeFiles/game.dir/linkLibs.rsp
game.exe: CMakeFiles/game.dir/objects1.rsp
game.exe: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\sama\Desktop\GameCharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable game.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game.exe
.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\game.dir\cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sama\Desktop\GameCharacter C:\Users\sama\Desktop\GameCharacter C:\Users\sama\Desktop\GameCharacter\build C:\Users\sama\Desktop\GameCharacter\build C:\Users\sama\Desktop\GameCharacter\build\CMakeFiles\game.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/game.dir/depend

