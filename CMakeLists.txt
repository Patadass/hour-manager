cmake_minimum_required(VERSION 3.26)
project(hour_manager)

set(CMAKE_CXX_STANDARD 17)

add_executable(hour_manager main.cpp
        util/draw/draw.h
        util/draw/draw.cpp
		util/utime/utime.h
		util/utime/utime.cpp
)
