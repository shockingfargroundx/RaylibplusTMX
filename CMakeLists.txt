cmake_minimum_required(VERSION 3.13)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release>")
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE) #link time optimization

#Ensures Raylib is built as static library
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build Raylib as static libraries" FORCE)

project("cmakeTMXProject")
set(CMAKE_CXX_STANDARD 20)

# Add library files
add_subdirectory("thirdparty/raylib")



# MY_SOURCES Definition. Lists all .cpp files in our src folder.
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable("${PROJECT_NAME}" "${MY_SOURCES}")

# Allows us to use TMX/Other assets in our recourses folder
target_compile_definitions(${CMAKE_PROJECT_NAME} PUBLIC RECOURSES_PATH="${CMAKE_CURRENT_SOURCE_DIR}/recourses/")
#Use this one when sharing with others.
## target_compile_definitions(${CMAKE_PROJECT_NAME} PUBLIC RECOURSES_PATH="./recourses")

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib_static) #Add libraries here

