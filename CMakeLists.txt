cmake_minimum_required(VERSION 3.1)

project(hello_opencv)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# options
option(BBBL "BeagleBone Blue build" OFF)

if(BBBL)
    message("Fetch bbbl opencv dir")
    set(OpenCV_DIR /opt/opencv-4.1.0/lib/cmake/opencv4)
else()
    message("Normal")
endif(BBBL)
unset(BBBL CACHE)


find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(hello_opencv src/main.cpp)

target_link_libraries(hello_opencv ${OpenCV_LIBS})
