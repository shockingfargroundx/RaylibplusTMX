cmake_minimum_required(VERSION 3.13)
project("Raylib")

# Adds the source files of raylib
file(GLOB_RECURSE RAYLIB_SOURCES CONFIGURE_DEPENDS "*.c")

add_library(raylib STATIC ${RAYLIB_SOURCES})

target_include_directories(raylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if(WIN32)
    target_link_libraries(raylib PUBLIC winmm opengl32 gdi32)
    endif()
