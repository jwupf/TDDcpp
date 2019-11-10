add_library(module Example.hpp Example.cpp)

target_include_directories(module PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")