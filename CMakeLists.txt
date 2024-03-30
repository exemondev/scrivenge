cmake_minimum_required(VERSION 3.28)
project(scrivenge)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(INCLUDE
    ./includes/view_ui.hpp
    ./includes/view_window_type.hpp
    ./includes/view_window_geometry.hpp
    ./includes/view_window.hpp
    ./includes/view_cli_window.hpp

    ./includes/controller_base.hpp
)

set(SOURCE
    ./src/main.cpp

    ./src/view_window_geometry.cpp
    ./src/view_cli_window.cpp

)

include(${CMAKE_SOURCE_DIR}/compiler_flags.cmake)
add_executable(${PROJECT_NAME} ${SOURCE} ${INCLUDE})
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} PRIVATE ${CURSES_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC includes)