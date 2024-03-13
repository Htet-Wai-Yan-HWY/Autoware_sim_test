# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_boost_io_context_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED boost_io_context_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(boost_io_context_FOUND FALSE)
  elseif(NOT boost_io_context_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(boost_io_context_FOUND FALSE)
  endif()
  return()
endif()
set(_boost_io_context_CONFIG_INCLUDED TRUE)

# output package information
if(NOT boost_io_context_FIND_QUIETLY)
  message(STATUS "Found boost_io_context: 1.2.0 (${boost_io_context_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'boost_io_context' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${boost_io_context_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(boost_io_context_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${boost_io_context_DIR}/${_extra}")
endforeach()