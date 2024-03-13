set(_AMENT_PACKAGE_NAME "tensorrt_classifier")
set(tensorrt_classifier_VERSION "0.0.1")
set(tensorrt_classifier_MAINTAINER ">Mingyu Li <mingyu.li@tier4.jp>")
set(tensorrt_classifier_BUILD_DEPENDS "autoware_cmake" "cuda_utils" "libopencv-dev" "rclcpp" "tensorrt_common")
set(tensorrt_classifier_BUILDTOOL_DEPENDS "ament_cmake_auto" "cudnn_cmake_module" "tensorrt_cmake_module")
set(tensorrt_classifier_BUILD_EXPORT_DEPENDS "cuda_utils" "libopencv-dev" "rclcpp" "tensorrt_common")
set(tensorrt_classifier_BUILDTOOL_EXPORT_DEPENDS "cudnn_cmake_module" "tensorrt_cmake_module")
set(tensorrt_classifier_EXEC_DEPENDS "cuda_utils" "libopencv-dev" "rclcpp" "tensorrt_common")
set(tensorrt_classifier_TEST_DEPENDS "ament_lint_auto" "autoware_lint_common")
set(tensorrt_classifier_GROUP_DEPENDS )
set(tensorrt_classifier_MEMBER_OF_GROUPS )
set(tensorrt_classifier_DEPRECATED "")
set(tensorrt_classifier_EXPORT_TAGS)
list(APPEND tensorrt_classifier_EXPORT_TAGS "<build_type>ament_cmake</build_type>")