cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(recipe-01
  LANGUAGES CXX
  VERSION 1.0.0
  )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app main.cpp item.cpp)