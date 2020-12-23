cmake_minimum_required(VERSION 2.8)
project(dockervscoderemotedevcpptest)

set(CMAKE_CXX_FLAGS "-fopenmp")
message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")

add_subdirectory(src)