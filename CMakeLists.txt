cmake_minimum_required (VERSION 3.8)
project(GUI)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(SDL2_STATIC ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-narrowing")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(SOURCE_FILES "")
list(APPEND SOURCE_FILES    main.cpp
                            pong.cpp
                            pong.hpp
                            ball.cpp
                            ball.hpp
                            paddle.cpp
                            paddle.hpp)
message(${SOURCE_FILES})

add_executable(example1 ${SOURCE_FILES})
target_link_libraries(example1 ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES})