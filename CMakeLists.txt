cmake_minimum_required(VERSION 3.0)
project(15451)

#[[
set(Boost_INCLUDE_DIR /usr/local/include/)
set(Boost_LIBRARY_DIR /usr/local/lib/)
find_package(Boost COMPONENTS log log_setup thread system filesystem program_options REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})]]

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SplayTree.cpp lib/Node.cpp)
add_executable(15451 ${SOURCE_FILES})
#[[target_link_libraries(15451 ${Boost_LIBRARIES})]]