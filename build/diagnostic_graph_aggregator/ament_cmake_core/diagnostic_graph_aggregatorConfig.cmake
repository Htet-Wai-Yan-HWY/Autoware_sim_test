# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_diagnostic_graph_aggregator_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED diagnostic_graph_aggregator_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(diagnostic_graph_aggregator_FOUND FALSE)
  elseif(NOT diagnostic_graph_aggregator_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(diagnostic_graph_aggregator_FOUND FALSE)
  endif()
  return()
endif()
set(_diagnostic_graph_aggregator_CONFIG_INCLUDED TRUE)

# output package information
if(NOT diagnostic_graph_aggregator_FIND_QUIETLY)
  message(STATUS "Found diagnostic_graph_aggregator: 0.1.0 (${diagnostic_graph_aggregator_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'diagnostic_graph_aggregator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${diagnostic_graph_aggregator_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(diagnostic_graph_aggregator_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${diagnostic_graph_aggregator_DIR}/${_extra}")
endforeach()
