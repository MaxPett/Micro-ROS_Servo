# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rclc_lifecycle_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rclc_lifecycle_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rclc_lifecycle_FOUND FALSE)
  elseif(NOT rclc_lifecycle_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rclc_lifecycle_FOUND FALSE)
  endif()
  return()
endif()
set(_rclc_lifecycle_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rclc_lifecycle_FIND_QUIETLY)
  message(STATUS "Found rclc_lifecycle: 1.1.2 (${rclc_lifecycle_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rclc_lifecycle' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rclc_lifecycle_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rclc_lifecycle_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${rclc_lifecycle_DIR}/${_extra}")
endforeach()