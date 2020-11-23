cmake_minimum_required(VERSION 2.8.3)
project(Octree)

add_compile_options(-std=c++17 -Wall -O3 -lstdc++ -pthread -fPIC )

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

find_package(OpenCV 3 REQUIRED)
find_library(YAML_LIBRARY yaml-cpp)
message(catkin includes ${catkin_INCLUDE_DIRS})
include_directories(
        wheel_vel
        ${catkin_INCLUDE_DIRS}
        ${OpenCV_INCLUDE_DIRS}
)

add_executable(Octree
                main.cpp)


target_link_libraries(Octree ${catkin_LIBRARIES} ${PCL_LIBRARIES} ${OpenCV_LIBS} ${YAML_LIBRARY})
