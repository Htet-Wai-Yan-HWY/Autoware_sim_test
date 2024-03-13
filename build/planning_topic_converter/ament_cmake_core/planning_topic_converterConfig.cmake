# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_planning_topic_converter_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED planning_topic_converter_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(planning_topic_converter_FOUND FALSE)
  elseif(NOT planning_topic_converter_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(planning_topic_converter_FOUND FALSE)
  endif()
  return()
endif()
set(_planning_topic_converter_CONFIG_INCLUDED TRUE)

# output package information
if(NOT planning_topic_converter_FIND_QUIETLY)
  message(STATUS "Found planning_topic_converter: 0.1.0 (${planning_topic_converter_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'planning_topic_converter' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${planning_topic_converter_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(planning_topic_converter_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${planning_topic_converter_DIR}/${_extra}")
endforeach()
