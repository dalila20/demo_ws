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
CMAKE_SOURCE_DIR = /home/mara/demo_ws/src/my_pkg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mara/demo_ws/build/my_pkg

# Utility rule file for my_pkg__py.

# Include the progress variables for this target.
include my_pkg__py/CMakeFiles/my_pkg__py.dir/progress.make

my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_introspection_c.c
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_c.c
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos.py
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/srv/_distancia_euclidiana.py
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/msg/__init__.py
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/srv/__init__.py
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos_s.c
my_pkg__py/CMakeFiles/my_pkg__py: rosidl_generator_py/my_pkg/srv/_distancia_euclidiana_s.c


rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/lib/rosidl_generator_py/rosidl_generator_py
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/lib/python3.8/site-packages/rosidl_generator_py/__init__.py
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/lib/python3.8/site-packages/rosidl_generator_py/generate_py_impl.py
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_action_pkg_typesupport_entry_point.c.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_action.py.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_idl_support.c.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_idl.py.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_msg_pkg_typesupport_entry_point.c.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_msg_support.c.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_msg.py.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_srv_pkg_typesupport_entry_point.c.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/foxy/share/rosidl_generator_py/resource/_srv.py.em
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: rosidl_adapter/my_pkg/msg/DistanciaDoisPontos.idl
rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c: rosidl_adapter/my_pkg/srv/DistanciaEuclidiana.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mara/demo_ws/build/my_pkg/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Python code for ROS interfaces"
	cd /home/mara/demo_ws/build/my_pkg/my_pkg__py && /usr/bin/python3 /opt/ros/foxy/share/rosidl_generator_py/cmake/../../../lib/rosidl_generator_py/rosidl_generator_py --generator-arguments-file /home/mara/demo_ws/build/my_pkg/rosidl_generator_py__arguments.json --typesupport-impls "rosidl_typesupport_fastrtps_c;rosidl_typesupport_introspection_c;rosidl_typesupport_c"

rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_introspection_c.c: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_introspection_c.c

rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_c.c: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_c.c

rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos.py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos.py

rosidl_generator_py/my_pkg/srv/_distancia_euclidiana.py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/srv/_distancia_euclidiana.py

rosidl_generator_py/my_pkg/msg/__init__.py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/msg/__init__.py

rosidl_generator_py/my_pkg/srv/__init__.py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/srv/__init__.py

rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos_s.c: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos_s.c

rosidl_generator_py/my_pkg/srv/_distancia_euclidiana_s.c: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/my_pkg/srv/_distancia_euclidiana_s.c

my_pkg__py: my_pkg__py/CMakeFiles/my_pkg__py
my_pkg__py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_fastrtps_c.c
my_pkg__py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_introspection_c.c
my_pkg__py: rosidl_generator_py/my_pkg/_my_pkg_s.ep.rosidl_typesupport_c.c
my_pkg__py: rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos.py
my_pkg__py: rosidl_generator_py/my_pkg/srv/_distancia_euclidiana.py
my_pkg__py: rosidl_generator_py/my_pkg/msg/__init__.py
my_pkg__py: rosidl_generator_py/my_pkg/srv/__init__.py
my_pkg__py: rosidl_generator_py/my_pkg/msg/_distancia_dois_pontos_s.c
my_pkg__py: rosidl_generator_py/my_pkg/srv/_distancia_euclidiana_s.c
my_pkg__py: my_pkg__py/CMakeFiles/my_pkg__py.dir/build.make

.PHONY : my_pkg__py

# Rule to build all files generated by this target.
my_pkg__py/CMakeFiles/my_pkg__py.dir/build: my_pkg__py

.PHONY : my_pkg__py/CMakeFiles/my_pkg__py.dir/build

my_pkg__py/CMakeFiles/my_pkg__py.dir/clean:
	cd /home/mara/demo_ws/build/my_pkg/my_pkg__py && $(CMAKE_COMMAND) -P CMakeFiles/my_pkg__py.dir/cmake_clean.cmake
.PHONY : my_pkg__py/CMakeFiles/my_pkg__py.dir/clean

my_pkg__py/CMakeFiles/my_pkg__py.dir/depend:
	cd /home/mara/demo_ws/build/my_pkg && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mara/demo_ws/src/my_pkg /home/mara/demo_ws/build/my_pkg/my_pkg__py /home/mara/demo_ws/build/my_pkg /home/mara/demo_ws/build/my_pkg/my_pkg__py /home/mara/demo_ws/build/my_pkg/my_pkg__py/CMakeFiles/my_pkg__py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : my_pkg__py/CMakeFiles/my_pkg__py.dir/depend
