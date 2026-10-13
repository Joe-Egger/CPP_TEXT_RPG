cmake_minimum_required(VERSION 3.10)

project(CPP_TEXT_RPG)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")

include_directories(
    "${PROJECT_SOURCE_DIR}/include"
)

add_executable(CPP_TEXT_RPG
    src/main.cpp
    src/Game.cpp
)