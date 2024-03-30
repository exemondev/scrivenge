cmake_minimum_required(VERSION 3.28)
project(scrivenge)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(INCLUDE
    ./includes/view_window_type.hpp
    
    ./includes/controller_base.hpp
)

set(SOURCE
    ./src/main.cpp
)

include(${CMAKE_SOURCE_DIR}/compiler_flags.cmake)
add_executable(${PROJECT_NAME} ${SOURCE} ${INCLUDE})
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} PRIVATE ${CURSES_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC includes)