cmake_minimum_required(VERSION 3.8)

project(imgui LANGUAGES CXX)

set(IMGUI_SOURCE "imgui.cpp" "imgui_demo.cpp" "imgui_draw.cpp" "imgui_impl_glfw.cpp" "imgui_impl_opengl3.cpp" "imgui_tables.cpp" "imgui_widgets.cpp")

add_library(imgui STATIC ${IMGUI_SOURCE})