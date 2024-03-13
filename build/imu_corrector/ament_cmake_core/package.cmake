set(_AMENT_PACKAGE_NAME "imu_corrector")
set(imu_corrector_VERSION "1.0.0")
set(imu_corrector_MAINTAINER "Yamato Ando <yamato.ando@tier4.jp>, Taiki Yamada <taiki.yamada@tier4.jp>, Koji Minoda <koji.minoda@tier4.jp>")
set(imu_corrector_BUILD_DEPENDS "diagnostic_updater" "rclcpp" "rclcpp_components" "sensor_msgs" "tf2" "tf2_geometry_msgs" "tf2_ros" "tier4_autoware_utils")
set(imu_corrector_BUILDTOOL_DEPENDS "ament_cmake_auto" "autoware_cmake")
set(imu_corrector_BUILD_EXPORT_DEPENDS "diagnostic_updater" "rclcpp" "rclcpp_components" "sensor_msgs" "tf2" "tf2_geometry_msgs" "tf2_ros" "tier4_autoware_utils")
set(imu_corrector_BUILDTOOL_EXPORT_DEPENDS )
set(imu_corrector_EXEC_DEPENDS "diagnostic_updater" "rclcpp" "rclcpp_components" "sensor_msgs" "tf2" "tf2_geometry_msgs" "tf2_ros" "tier4_autoware_utils")
set(imu_corrector_TEST_DEPENDS "ament_cmake_gmock" "ament_cmake_gtest" "ament_lint_auto" "autoware_lint_common")
set(imu_corrector_GROUP_DEPENDS )
set(imu_corrector_MEMBER_OF_GROUPS )
set(imu_corrector_DEPRECATED "")
set(imu_corrector_EXPORT_TAGS)
list(APPEND imu_corrector_EXPORT_TAGS "<build_type>ament_cmake</build_type>")