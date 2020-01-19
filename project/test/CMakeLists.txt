cmake_minimum_required(VERSION 3.15)

set(This ServerTest)

set(Sources
    ServerTests.cpp
)


add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    mqtt_broker
)

add_test(
    NAME ${This}
    COMMAND ${This}
)