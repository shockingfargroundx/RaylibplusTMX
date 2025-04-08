cmake_minimum_required(VERSION 3.11)
project(
    raylib-tileson
)

# Register the cmake folder for find_package()
#LIST(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# raylib-tileson
add_subdirectory(src)

# Examples
option(BUILD_RAYLIB_TILESON_EXAMPLE "Example" OFF)
if(BUILD_RAYLIB_TILESON_EXAMPLE)
#    add_subdirectory(example)
endif()

