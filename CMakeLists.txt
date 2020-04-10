cmake_minimum_required(VERSION 3.15)
project(Game)

set(CMAKE_CXX_STANDARD 14)

find_package(GTest)
find_package(Threads)

include_directories(${GTEST_INCLUDE_DIRS})

#add_library(lib STATIC src/unittypes.cpp src/unittypes.h)
add_subdirectory(src ${PROJECT_SOURCE_DIR}/lib)
add_executable(UTypesTest tests/test_unittypes.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

target_link_libraries(UTypesTest lib)
target_link_libraries(UTypesTest "${GTEST_LIBRARIES}" Threads::Threads)

target_include_directories(UTypesTest PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
