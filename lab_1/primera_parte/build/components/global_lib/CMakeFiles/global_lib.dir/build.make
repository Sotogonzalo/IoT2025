# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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
CMAKE_SOURCE_DIR = C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build

# Include any dependencies generated for this target.
include components/global_lib/CMakeFiles/global_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include components/global_lib/CMakeFiles/global_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include components/global_lib/CMakeFiles/global_lib.dir/progress.make

# Include the compile flags for this target's objects.
include components/global_lib/CMakeFiles/global_lib.dir/flags.make

components/global_lib/CMakeFiles/global_lib.dir/codegen:
.PHONY : components/global_lib/CMakeFiles/global_lib.dir/codegen

components/global_lib/CMakeFiles/global_lib.dir/global.c.obj: components/global_lib/CMakeFiles/global_lib.dir/flags.make
components/global_lib/CMakeFiles/global_lib.dir/global.c.obj: components/global_lib/CMakeFiles/global_lib.dir/includes_C.rsp
components/global_lib/CMakeFiles/global_lib.dir/global.c.obj: C:/Users/selt2/OneDrive/Escritorio/branch_test1/IoT2025/lab_1/primera_parte/components/global_lib/global.c
components/global_lib/CMakeFiles/global_lib.dir/global.c.obj: components/global_lib/CMakeFiles/global_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object components/global_lib/CMakeFiles/global_lib.dir/global.c.obj"
	cd /d C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT components/global_lib/CMakeFiles/global_lib.dir/global.c.obj -MF CMakeFiles\global_lib.dir\global.c.obj.d -o CMakeFiles\global_lib.dir\global.c.obj -c C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\components\global_lib\global.c

components/global_lib/CMakeFiles/global_lib.dir/global.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/global_lib.dir/global.c.i"
	cd /d C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\components\global_lib\global.c > CMakeFiles\global_lib.dir\global.c.i

components/global_lib/CMakeFiles/global_lib.dir/global.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/global_lib.dir/global.c.s"
	cd /d C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib && C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\components\global_lib\global.c -o CMakeFiles\global_lib.dir\global.c.s

# Object files for target global_lib
global_lib_OBJECTS = \
"CMakeFiles/global_lib.dir/global.c.obj"

# External object files for target global_lib
global_lib_EXTERNAL_OBJECTS =

components/global_lib/libglobal_lib.a: components/global_lib/CMakeFiles/global_lib.dir/global.c.obj
components/global_lib/libglobal_lib.a: components/global_lib/CMakeFiles/global_lib.dir/build.make
components/global_lib/libglobal_lib.a: components/global_lib/CMakeFiles/global_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libglobal_lib.a"
	cd /d C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib && $(CMAKE_COMMAND) -P CMakeFiles\global_lib.dir\cmake_clean_target.cmake
	cd /d C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\global_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
components/global_lib/CMakeFiles/global_lib.dir/build: components/global_lib/libglobal_lib.a
.PHONY : components/global_lib/CMakeFiles/global_lib.dir/build

components/global_lib/CMakeFiles/global_lib.dir/clean:
	cd /d C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib && $(CMAKE_COMMAND) -P CMakeFiles\global_lib.dir\cmake_clean.cmake
.PHONY : components/global_lib/CMakeFiles/global_lib.dir/clean

components/global_lib/CMakeFiles/global_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\components\global_lib C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib C:\Users\selt2\OneDrive\Escritorio\branch_test1\IoT2025\lab_1\primera_parte\build\components\global_lib\CMakeFiles\global_lib.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : components/global_lib/CMakeFiles/global_lib.dir/depend

