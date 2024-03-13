# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tracking_object_merger_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tracking_object_merger_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tracking_object_merger_FOUND FALSE)
  elseif(NOT tracking_object_merger_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tracking_object_merger_FOUND FALSE)
  endif()
  return()
endif()
set(_tracking_object_merger_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tracking_object_merger_FIND_QUIETLY)
  message(STATUS "Found tracking_object_merger: 0.0.0 (${tracking_object_merger_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tracking_object_merger' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tracking_object_merger_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tracking_object_merger_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${tracking_object_merger_DIR}/${_extra}")
endforeach()