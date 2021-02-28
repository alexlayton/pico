cmake_minimum_required(VERSION 3.13)

include(pico-sdk/pico_sdk_init.cmake)

project(pico-app)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_subdirectory(app)
