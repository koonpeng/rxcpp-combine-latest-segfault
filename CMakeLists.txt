cmake_minimum_required(VERSION 3.10)
project(rxcpp_test)

set(CMAKE_CXX_STANDARD 14)

find_package(Threads)

add_library(so_test SHARED
  Foo.cpp
)

target_include_directories(so_test
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/RxCpp-4.1.0/Rx/v2/src>
)

target_link_libraries(so_test
  PUBLIC
    Threads::Threads
)

add_executable(rxcpp_test main.cpp Bar.cpp)

target_link_libraries(rxcpp_test PRIVATE so_test)