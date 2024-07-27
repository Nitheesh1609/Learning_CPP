cmake_minimum_required(VERSION 3.28)
project(Concurrency)

set(CMAKE_CXX_STANDARD 17)

add_executable(Concurrency main.cpp)
add_executable(threadret threadmain.cpp)
add_executable(tasks tasks.cpp)
add_executable(conditionvaribale conditionvariable.cpp
        conditionvariable.cpp)
add_executable(binarysemaphore binarysemaphore.cpp)
