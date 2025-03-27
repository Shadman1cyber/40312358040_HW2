cmake_minimum_required(VERSION 3.10)
project(GameCharacter)

set(CMAKE_CXX_STANDARD 11)

add_executable(game main.cpp character.cpp game.cpp)
