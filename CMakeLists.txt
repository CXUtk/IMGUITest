# CMakeList.txt: IMGUITest 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("IMGUITest")


# 将源代码添加到此项目的可执行文件。
add_executable(IMGUITest "IMGUITest.cpp" "IMGUITest.h" "App.cpp" "App.h")
  
set_target_properties (IMGUITest PROPERTIES
                      CXX_STANDARD 17
                      CXX_EXTENSIONS OFF
                      )

target_include_directories (IMGUITest PUBLIC "${PROJECT_SOURCE_DIR}/deps")
include_directories (${PROJECT_SOURCE_DIR}/deps)

# TODO: 如有需要，请添加测试并安装目标。
FIND_PACKAGE (OpenGL REQUIRED)

add_subdirectory ("deps/glad")
add_subdirectory ("deps/lodepng")
add_subdirectory ("deps/imgui")


target_link_libraries (IMGUITest PRIVATE "${PROJECT_SOURCE_DIR}/deps/GLFW/lib/glfw3.lib")
target_link_libraries (IMGUITest PRIVATE glad)
target_link_libraries (IMGUITest PRIVATE lodepng)
target_link_libraries (IMGUITest PRIVATE imgui)
