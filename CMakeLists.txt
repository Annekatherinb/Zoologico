cmake_minimum_required(VERSION 3.24)
project(Zoologico)

set(CMAKE_CXX_STANDARD 17)

add_executable(Zoologico src/Animal.cpp src/Habitat.h src/Habitat.cpp src/Zoo.h src/Zoo.cpp src/Animal.h
        src/Selvatico.h src/Selvatico.cpp src/Acuatico.h src/Acuatico.cpp src/Desertico.h src/Desertico.cpp
        src/Polar.h src/Polar.cpp main.cpp )
