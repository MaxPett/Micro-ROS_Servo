# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/max/microros_ws4/firmware/mcu_ws/pca9685_library

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library

# Include any dependencies generated for this target.
include CMakeFiles/pca9685_library.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pca9685_library.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pca9685_library.dir/flags.make

CMakeFiles/pca9685_library.dir/src/pca9685.c.obj: CMakeFiles/pca9685_library.dir/flags.make
CMakeFiles/pca9685_library.dir/src/pca9685.c.obj: /home/max/microros_ws4/firmware/mcu_ws/pca9685_library/src/pca9685.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pca9685_library.dir/src/pca9685.c.obj"
	/home/max/microros_ws4/firmware/toolchain/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pca9685_library.dir/src/pca9685.c.obj   -c /home/max/microros_ws4/firmware/mcu_ws/pca9685_library/src/pca9685.c

CMakeFiles/pca9685_library.dir/src/pca9685.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pca9685_library.dir/src/pca9685.c.i"
	/home/max/microros_ws4/firmware/toolchain/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/max/microros_ws4/firmware/mcu_ws/pca9685_library/src/pca9685.c > CMakeFiles/pca9685_library.dir/src/pca9685.c.i

CMakeFiles/pca9685_library.dir/src/pca9685.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pca9685_library.dir/src/pca9685.c.s"
	/home/max/microros_ws4/firmware/toolchain/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/max/microros_ws4/firmware/mcu_ws/pca9685_library/src/pca9685.c -o CMakeFiles/pca9685_library.dir/src/pca9685.c.s

# Object files for target pca9685_library
pca9685_library_OBJECTS = \
"CMakeFiles/pca9685_library.dir/src/pca9685.c.obj"

# External object files for target pca9685_library
pca9685_library_EXTERNAL_OBJECTS =

libpca9685_library.a: CMakeFiles/pca9685_library.dir/src/pca9685.c.obj
libpca9685_library.a: CMakeFiles/pca9685_library.dir/build.make
libpca9685_library.a: CMakeFiles/pca9685_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libpca9685_library.a"
	$(CMAKE_COMMAND) -P CMakeFiles/pca9685_library.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pca9685_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pca9685_library.dir/build: libpca9685_library.a

.PHONY : CMakeFiles/pca9685_library.dir/build

CMakeFiles/pca9685_library.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pca9685_library.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pca9685_library.dir/clean

CMakeFiles/pca9685_library.dir/depend:
	cd /home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/microros_ws4/firmware/mcu_ws/pca9685_library /home/max/microros_ws4/firmware/mcu_ws/pca9685_library /home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library /home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library /home/max/microros_ws4/firmware/mcu_ws/build/pca9685_library/CMakeFiles/pca9685_library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pca9685_library.dir/depend
