cmake_minimum_required(VERSION 3.14)

project(Homework922 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Network Sql)

add_executable(Homework922
  main.cpp
)
target_link_libraries(Homework922 Qt6::Widgets Qt6::Network Qt6::Sql)

install(TARGETS Homework922
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
