cmake_minimum_required(VERSION 2.8.3)
project(gtest_example)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
  LIBRARIES gtest_example
  CATKIN_DEPENDS roscpp std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a cpp executable
 add_executable(gtest_example_node src/gtest_example_node.cpp)

## Specify libraries to link a library or executable target against
 target_link_libraries(gtest_example_node
   ${catkin_LIBRARIES}
 )

###########
## Test ##
###########
catkin_add_gtest(gtest_test test/gtest_test.cpp)
if(TARGET gtest_test)
   target_link_libraries(gtest_test ${catkin_LIBRARIES})
 endif()
