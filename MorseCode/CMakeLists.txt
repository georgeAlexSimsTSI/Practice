cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

project(MorseCode VERSION 1.0)

add_executable(${PROJECT_NAME} src/main.cpp src/MorseCode/MorseCode.cpp src/InputValidation/userInput.cpp)