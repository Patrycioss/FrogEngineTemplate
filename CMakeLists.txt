cmake_minimum_required(VERSION 3.28)
project(MyGame)

set(CMAKE_CXX_STANDARD 23)

file(COPY resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(FrogEngine)

add_executable(
        MyGame
        
        src/main.cpp
        src/MyGame.cpp
)

target_link_libraries(MyGame FrogEngine)