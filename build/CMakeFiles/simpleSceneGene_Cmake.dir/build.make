# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /home/ctrtemp/Documents/cpp_code_Lib/cmake/cmake-3.21.0-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/ctrtemp/Documents/cpp_code_Lib/cmake/cmake-3.21.0-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build

# Include any dependencies generated for this target.
include CMakeFiles/simpleSceneGene_Cmake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simpleSceneGene_Cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simpleSceneGene_Cmake.dir/flags.make

CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o: ../main.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/main.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/main.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/main.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o: ../Source/para_enable.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/para_enable.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/para_enable.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/para_enable.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o: ../Source/scene.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/scene.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/scene.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/scene.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o: ../Source/box.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/box.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/box.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/box.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o: ../Source/camera.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/camera.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/camera.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/camera.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o: ../Source/diffuseLight.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/diffuseLight.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/diffuseLight.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/diffuseLight.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o: ../Source/hitable.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/hitable.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/hitable.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/hitable.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o: ../Source/hitableList.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/hitableList.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/hitableList.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/hitableList.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o: ../Source/Lights.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/Lights.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/Lights.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/Lights.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o: ../Source/material.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/material.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/material.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/material.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o: ../Source/perlin.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/perlin.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/perlin.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/perlin.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o: ../Source/random.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/random.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/random.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/random.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o: ../Source/sphere.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/sphere.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/sphere.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/sphere.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o: ../Source/textures.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/textures.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/textures.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/textures.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.s

CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/flags.make
CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o: ../Source/volume.cpp
CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o: CMakeFiles/simpleSceneGene_Cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o -MF CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o.d -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o -c /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/volume.cpp

CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/volume.cpp > CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.i

CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/Source/volume.cpp -o CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.s

# Object files for target simpleSceneGene_Cmake
simpleSceneGene_Cmake_OBJECTS = \
"CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o" \
"CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o"

# External object files for target simpleSceneGene_Cmake
simpleSceneGene_Cmake_EXTERNAL_OBJECTS =

simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/main.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/para_enable.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/scene.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/box.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/camera.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/diffuseLight.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitable.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/hitableList.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/Lights.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/material.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/perlin.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/random.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/sphere.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/textures.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/Source/volume.cpp.o
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/build.make
simpleSceneGene_Cmake: CMakeFiles/simpleSceneGene_Cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable simpleSceneGene_Cmake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simpleSceneGene_Cmake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simpleSceneGene_Cmake.dir/build: simpleSceneGene_Cmake
.PHONY : CMakeFiles/simpleSceneGene_Cmake.dir/build

CMakeFiles/simpleSceneGene_Cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simpleSceneGene_Cmake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simpleSceneGene_Cmake.dir/clean

CMakeFiles/simpleSceneGene_Cmake.dir/depend:
	cd /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build /home/ctrtemp/Documents/VS_Code_Prj/RenderingCoreTest/Test/build/CMakeFiles/simpleSceneGene_Cmake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simpleSceneGene_Cmake.dir/depend

