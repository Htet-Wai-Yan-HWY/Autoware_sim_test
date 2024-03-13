# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_eagleye_geo_pose_fusion_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED eagleye_geo_pose_fusion_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(eagleye_geo_pose_fusion_FOUND FALSE)
  elseif(NOT eagleye_geo_pose_fusion_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(eagleye_geo_pose_fusion_FOUND FALSE)
  endif()
  return()
endif()
set(_eagleye_geo_pose_fusion_CONFIG_INCLUDED TRUE)

# output package information
if(NOT eagleye_geo_pose_fusion_FIND_QUIETLY)
  message(STATUS "Found eagleye_geo_pose_fusion: 1.0.0 (${eagleye_geo_pose_fusion_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'eagleye_geo_pose_fusion' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${eagleye_geo_pose_fusion_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(eagleye_geo_pose_fusion_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${eagleye_geo_pose_fusion_DIR}/${_extra}")
endforeach()
