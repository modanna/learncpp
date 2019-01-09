cmake_minimum_required(VERSION 2.8)
project(app)

# Compiler configuration
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)
# set(CMAKE_BUILD_TYPE Release)

#find_package(glfw3 3.2 REQUIRED)
#find_package(OpenGL REQUIRED)

add_library(learn STATIC learn.cpp)

add_executable(app main.cpp)

target_link_libraries(app learn)

#target_include_directories(app PRIVATE ${OPENGL_INCLUDE_DIR})
#target_link_libraries(app ${OPENGL_gl_LIBRARY} -static)

#target_link_libraries(app glfw3 -static)
