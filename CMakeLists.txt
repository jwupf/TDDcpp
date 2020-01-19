cmake_minimum_required(VERSION 3.15)

SET(This MQTT)
SET(CMAKE_C_STANDARD 99)
SET(CMAKE_CPP_STANDARD 17)
SET(CMAKE_POSITION_INDEPENDENT_CODE ON )
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

project(${This} C CXX)

enable_testing()

add_subdirectory(external/googletest)

add_subdirectory(project)

# add_library(${This} STATIC ${Sources} ${Headers})

