# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/luis/tarea2/session2_start

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luis/tarea2/session2_start/build

# Include any dependencies generated for this target.
include CMakeFiles/exampleED.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exampleED.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exampleED.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exampleED.dir/flags.make

CMakeFiles/exampleED.dir/exampleED.cc.o: CMakeFiles/exampleED.dir/flags.make
CMakeFiles/exampleED.dir/exampleED.cc.o: ../exampleED.cc
CMakeFiles/exampleED.dir/exampleED.cc.o: CMakeFiles/exampleED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/tarea2/session2_start/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exampleED.dir/exampleED.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleED.dir/exampleED.cc.o -MF CMakeFiles/exampleED.dir/exampleED.cc.o.d -o CMakeFiles/exampleED.dir/exampleED.cc.o -c /home/luis/tarea2/session2_start/exampleED.cc

CMakeFiles/exampleED.dir/exampleED.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleED.dir/exampleED.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/tarea2/session2_start/exampleED.cc > CMakeFiles/exampleED.dir/exampleED.cc.i

CMakeFiles/exampleED.dir/exampleED.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleED.dir/exampleED.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/tarea2/session2_start/exampleED.cc -o CMakeFiles/exampleED.dir/exampleED.cc.s

CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o: CMakeFiles/exampleED.dir/flags.make
CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o: ../src/EDActionInitialization.cc
CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o: CMakeFiles/exampleED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/tarea2/session2_start/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o -MF CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o.d -o CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o -c /home/luis/tarea2/session2_start/src/EDActionInitialization.cc

CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/tarea2/session2_start/src/EDActionInitialization.cc > CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.i

CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/tarea2/session2_start/src/EDActionInitialization.cc -o CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.s

CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o: CMakeFiles/exampleED.dir/flags.make
CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o: ../src/EDDetectorConstruction.cc
CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o: CMakeFiles/exampleED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/tarea2/session2_start/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o -MF CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o.d -o CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o -c /home/luis/tarea2/session2_start/src/EDDetectorConstruction.cc

CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/tarea2/session2_start/src/EDDetectorConstruction.cc > CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.i

CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/tarea2/session2_start/src/EDDetectorConstruction.cc -o CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.s

CMakeFiles/exampleED.dir/src/EDEventAction.cc.o: CMakeFiles/exampleED.dir/flags.make
CMakeFiles/exampleED.dir/src/EDEventAction.cc.o: ../src/EDEventAction.cc
CMakeFiles/exampleED.dir/src/EDEventAction.cc.o: CMakeFiles/exampleED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/tarea2/session2_start/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/exampleED.dir/src/EDEventAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleED.dir/src/EDEventAction.cc.o -MF CMakeFiles/exampleED.dir/src/EDEventAction.cc.o.d -o CMakeFiles/exampleED.dir/src/EDEventAction.cc.o -c /home/luis/tarea2/session2_start/src/EDEventAction.cc

CMakeFiles/exampleED.dir/src/EDEventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleED.dir/src/EDEventAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/tarea2/session2_start/src/EDEventAction.cc > CMakeFiles/exampleED.dir/src/EDEventAction.cc.i

CMakeFiles/exampleED.dir/src/EDEventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleED.dir/src/EDEventAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/tarea2/session2_start/src/EDEventAction.cc -o CMakeFiles/exampleED.dir/src/EDEventAction.cc.s

CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o: CMakeFiles/exampleED.dir/flags.make
CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o: ../src/EDPrimaryGeneratorAction.cc
CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o: CMakeFiles/exampleED.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luis/tarea2/session2_start/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o -MF CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o.d -o CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o -c /home/luis/tarea2/session2_start/src/EDPrimaryGeneratorAction.cc

CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luis/tarea2/session2_start/src/EDPrimaryGeneratorAction.cc > CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.i

CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luis/tarea2/session2_start/src/EDPrimaryGeneratorAction.cc -o CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.s

# Object files for target exampleED
exampleED_OBJECTS = \
"CMakeFiles/exampleED.dir/exampleED.cc.o" \
"CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o" \
"CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o" \
"CMakeFiles/exampleED.dir/src/EDEventAction.cc.o" \
"CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o"

# External object files for target exampleED
exampleED_EXTERNAL_OBJECTS =

exampleED: CMakeFiles/exampleED.dir/exampleED.cc.o
exampleED: CMakeFiles/exampleED.dir/src/EDActionInitialization.cc.o
exampleED: CMakeFiles/exampleED.dir/src/EDDetectorConstruction.cc.o
exampleED: CMakeFiles/exampleED.dir/src/EDEventAction.cc.o
exampleED: CMakeFiles/exampleED.dir/src/EDPrimaryGeneratorAction.cc.o
exampleED: CMakeFiles/exampleED.dir/build.make
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4Tree.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4FR.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4GMocren.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4visHepRep.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4RayTracer.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4VRML.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4ToolsSG.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4OpenGL.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4visQt3D.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4vis_management.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4modeling.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4interfaces.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4persistency.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4error_propagation.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4readout.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4physicslists.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4run.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4event.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4tracking.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4parmodels.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4processes.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4digits_hits.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4track.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4particles.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4geometry.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4materials.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4graphics_reps.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libXmu.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libXext.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libXt.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libICE.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libSM.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libX11.so
exampleED: /usr/lib/x86_64-linux-gnu/libGL.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5OpenGL.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5PrintSupport.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5Widgets.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt53DExtras.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt53DInput.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5Gamepad.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt53DLogic.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt53DRender.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt53DCore.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5Gui.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5Network.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libQt5Core.so.5.15.8
exampleED: /home/luis/anaconda3/envs/G4/lib/libxerces-c.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4analysis.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libfreetype.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libz.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libexpat.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4intercoms.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4global.so
exampleED: /home/luis/anaconda3/envs/G4/lib/libG4ptl.so.2.3.3
exampleED: /home/luis/anaconda3/envs/G4/lib/libCLHEP-2.4.6.2.so
exampleED: CMakeFiles/exampleED.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luis/tarea2/session2_start/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable exampleED"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exampleED.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exampleED.dir/build: exampleED
.PHONY : CMakeFiles/exampleED.dir/build

CMakeFiles/exampleED.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exampleED.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exampleED.dir/clean

CMakeFiles/exampleED.dir/depend:
	cd /home/luis/tarea2/session2_start/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luis/tarea2/session2_start /home/luis/tarea2/session2_start /home/luis/tarea2/session2_start/build /home/luis/tarea2/session2_start/build /home/luis/tarea2/session2_start/build/CMakeFiles/exampleED.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exampleED.dir/depend

