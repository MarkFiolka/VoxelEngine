cmake_minimum_required(VERSION 3.10)
project(VoxelEngine)

set(CMAKE_CXX_STANDARD 17)

set(GLFW_DIR "external/glfw")
set(GLAD_DIR "external/glad")

add_subdirectory(${GLFW_DIR})

include_directories(
        ${GLAD_DIR}/include
        ${GLFW_DIR}/include
)

add_executable(VoxelEngine
        src/main.cpp
        src/Shader.cpp
        ${GLAD_DIR}/src/glad.c
)

target_link_libraries(VoxelEngine glfw ${CMAKE_DL_LIBS})
