cmake_minimum_required(VERSION 3.19)
project(head_first_design_patterns_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(01-strategy 01-strategy/main.cpp)
add_executable(01-strategy-static 01-strategy-static/main.cpp)
add_executable(02-observer 02-observer/main.cpp 02-observer/weather_data.cpp)
add_executable(03-decorator 03-decorator/main.cpp)
add_executable(03-decorator-static 03-decorator-static/main.cpp)
add_executable(04-factory-simple 04-factory-simple/main.cpp)
add_executable(04-factory 04-factory/main.cpp)
