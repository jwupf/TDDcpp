cmake_minimum_required(VERSION 3.13)

set(This ExampleTest)

set(Sources
    ExampleTests.cpp
)


add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    adder
)

add_test(
    NAME ${This}
    COMMAND ${This}
)