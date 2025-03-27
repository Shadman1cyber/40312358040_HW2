cmake_minimum_required(VERSION 3.10)
project(MedicalPatient)

set(CMAKE_CXX_STANDARD 11)

add_executable(Patient main.cpp patient.cpp hospital.cpp)
