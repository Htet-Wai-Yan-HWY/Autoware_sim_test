set(_AMENT_PACKAGE_NAME "autoware_launch")
set(autoware_launch_VERSION "0.1.0")
set(autoware_launch_MAINTAINER "Yukihiro Saito <yukihiro.saito@tier4.jp>")
set(autoware_launch_BUILD_DEPENDS )
set(autoware_launch_BUILDTOOL_DEPENDS "ament_cmake_auto")
set(autoware_launch_BUILD_EXPORT_DEPENDS )
set(autoware_launch_BUILDTOOL_EXPORT_DEPENDS )
set(autoware_launch_EXEC_DEPENDS "ad_api_adaptors" "global_parameter_loader" "python3-bson" "python3-tornado" "rviz2" "tier4_autoware_api_launch" "tier4_control_launch" "tier4_localization_launch" "tier4_map_launch" "tier4_perception_launch" "tier4_planning_launch" "tier4_sensing_launch" "tier4_simulator_launch" "tier4_system_launch" "tier4_vehicle_launch")
set(autoware_launch_TEST_DEPENDS "ament_lint_auto" "autoware_lint_common")
set(autoware_launch_GROUP_DEPENDS )
set(autoware_launch_MEMBER_OF_GROUPS )
set(autoware_launch_DEPRECATED "")
set(autoware_launch_EXPORT_TAGS)
list(APPEND autoware_launch_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
