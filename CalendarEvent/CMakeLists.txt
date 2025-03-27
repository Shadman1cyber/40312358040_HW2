cmake_minimum_required(VERSION 3.10)
project(CalendarEvent)

set(CMAKE_CXX_STANDARD 11)

add_executable(calendar main.cpp Event.cpp Calendar.cpp)
