cmake_minimum_required(VERSION 2.6)
project(plys2pcds)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(plys2pcds plys2pcds.cpp)

target_link_libraries (plys2pcds ${PCL_LIBRARIES})

#install(TARGETS pcd2ply RUNTIME DESTINATION bin)
