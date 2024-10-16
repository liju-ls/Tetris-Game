cmake_minimum_required(VERSION 3.5.0)
project(tetris-game VERSION 0.1.0 LANGUAGES C CXX)



include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(tetris-game main.cpp)

find_library(SFML_WINDOW sfml-window-a ${CMAKE_SOURCE_DIR}/lib)
find_library(SFML_GRAPHICS sfml-graphics-a ${CMAKE_SOURCE_DIR}/lib)
find_library(SFML_MAIN sfml-main-a ${CMAKE_SOURCE_DIR}/lib)
find_library(SFML_SYSTEM sfml-system-a ${CMAKE_SOURCE_DIR}/lib)



target_link_libraries(tetris-game ${SFML_WINDOW} ${SFML_GRAPHICS}  ${SFML_MAIN} ${SFML_SYSTEM})
