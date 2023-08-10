cmake_minimum_required(VERSION 3.0.0)
project(cv_test VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
find_package(Threads REQUIRED)

add_executable(cv_test main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDAR_REQUIRED ON)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(cv_test ${OpenCV_LIBS} ${CMAKE_THREAD_LIBS_INIT})