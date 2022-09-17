cmake_minimum_required(VERSION 3.0.0)
project(gif VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(gif gif-h-demo.cpp)
set_target_properties(gif PROPERTIES
            CXX_STANDARD 20
            CXX_EXTENSIONS OFF
            )
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
