cmake_minimum_required(VERSION 3.8)

project(imgui LANGUAGES CXX)

aux_source_directory(. IMGUI_SOURCE)

if (NOT WIN32)
    list(FILTER ${IMGUI_SOURCE} EXCLUDE REGEX "imgui_impl_win32.*")
endif()

add_library(imgui STATIC ${IMGUI_SOURCE})