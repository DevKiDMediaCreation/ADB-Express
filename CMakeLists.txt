cmake_minimum_required(VERSION 3.26)
project(ADB_Express)

set(CMAKE_CXX_STANDARD 17)

add_executable(ADB_Express main.cpp
        host/connect.cpp
        movement/text.cpp
        movement/manuel.cpp
        movement/swipe.cpp
        script/script.cpp
        script/handler.cpp
        host/connect.h
        host/disconnect.h
        movement/text.h
        movement/swipe.h
        movement/manuel.h
        script/handler.h
        script/script.h
        host/hosthandler.cpp
        host/hosthandler.h
        host/pair.cpp
        host/pair.h
)
