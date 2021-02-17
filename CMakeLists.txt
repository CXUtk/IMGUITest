cmake_minimum_required (VERSION 3.8)

project ("IMGUITest")


# Add source file
add_executable(IMGUITest "IMGUITest.cpp" "IMGUITest.h" "App.cpp" "App.h")
  
set_target_properties (IMGUITest PROPERTIES
                      CXX_STANDARD 17
                      )

# Turn off 
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory("${PROJECT_SOURCE_DIR}/deps/glfw")
target_link_libraries(IMGUITest PRIVATE glfw)

#target_include_directories (IMGUITest PUBLIC "${PROJECT_SOURCE_DIR}/deps")
#include_directories (${PROJECT_SOURCE_DIR}/deps)

# TODO: 如有需要，请添加测试并安装目标。
FIND_PACKAGE (OpenGL REQUIRED)
target_link_libraries(IMGUITest PRIVATE OpenGL::GL)

if (NOT WIN32)
    list(append LIBS dl)
endif()

add_subdirectory ("deps/glad")
add_subdirectory ("deps/lodepng")
add_subdirectory ("deps/imgui")


target_link_libraries (IMGUITest PRIVATE glad)
target_link_libraries (IMGUITest PRIVATE lodepng)
target_link_libraries (IMGUITest PRIVATE imgui)
target_link_libraries (IMGUITest PRIVATE ${LIBS})
