add_library(mqtt_broker Server.hpp Server.cpp)
add_executable(server main.cpp Server.hpp Server.cpp)
target_include_directories(mqtt_broker PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")