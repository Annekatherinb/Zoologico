cmake_minimum_required(VERSION 3.24)
project(Zoologico)

set(CMAKE_CXX_STANDARD 17)

add_executable(Zoologico main.cpp src/Main.cpp src/Animales.cpp src/Habitat.h src/Alimentacion.cpp src/Habitat.cpp src/Zoo.h src/Zoo.cpp)
