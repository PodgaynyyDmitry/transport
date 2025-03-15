cmake_minimum_required(VERSION 3.10)
project(transport)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(transport main.cpp
    include/transport.h src/transport.cpp
    include/motorcycle.h src/motorcycle.cpp
    include/scooter.h src/scooter.cpp
    include/car.h src/car.cpp
    include/bus.h src/bus.cpp)
