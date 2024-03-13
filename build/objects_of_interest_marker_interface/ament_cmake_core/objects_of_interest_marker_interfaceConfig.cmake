# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_objects_of_interest_marker_interface_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED objects_of_interest_marker_interface_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(objects_of_interest_marker_interface_FOUND FALSE)
  elseif(NOT objects_of_interest_marker_interface_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(objects_of_interest_marker_interface_FOUND FALSE)
  endif()
  return()
endif()
set(_objects_of_interest_marker_interface_CONFIG_INCLUDED TRUE)

# output package information
if(NOT objects_of_interest_marker_interface_FIND_QUIETLY)
  message(STATUS "Found objects_of_interest_marker_interface: 0.1.0 (${objects_of_interest_marker_interface_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'objects_of_interest_marker_interface' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${objects_of_interest_marker_interface_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(objects_of_interest_marker_interface_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${objects_of_interest_marker_interface_DIR}/${_extra}")
endforeach()
