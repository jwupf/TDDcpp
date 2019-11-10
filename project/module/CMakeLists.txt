add_library(adder Example.hpp Example.cpp)

target_include_directories(adder PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")