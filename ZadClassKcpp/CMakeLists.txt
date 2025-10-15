cmake_minimum_required(VERSION 3.10)
project(KCCP_project)

# Add include directory
include_directories(include)

# Add executable with source files
add_executable(
    main
    main.cc
    src/ZadKcpp.cc
    src/Zad1Kcpp.cc
    src/Zad2Kcpp.cc
    src/Zad3Kcpp.cc
    src/Zad4Kcpp.cc
    src/Zad5Kcpp.cc
    src/Zad6Kcpp.cc
    src/Zad7Kcpp.cc
    src/Zad8Kcpp.cc
    src/Zad9Kcpp.cc
    src/Zad10Kcpp.cc
)
