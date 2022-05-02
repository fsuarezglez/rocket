cmake_minimum_required(VERSION 2.4)

project(BRL-test)

set(project_sources
    main.cpp
    rocket.cpp)

add_executable(rocket ${project_sources})

set_property(TARGET rocket PROPERTY CXX_STANDARD 17)

