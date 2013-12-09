#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>
#include <gtest/gtest.h>

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
//============================================================================
// Name        : gtest_sample.cpp
// Author      : sina nia kosari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "ros/ros.h"
#include "gtest/gtest.h"
#include <iostream>
#include "math.h"

using namespace std;

double squareRoot(const double x){
	return(x<0 ? -1 : sqrt(x));

}

TEST(SquareRootTest, PositiveNos) {
    EXPECT_EQ(18.0, squareRoot(324.0));
    EXPECT_EQ(25.4, squareRoot(645.16));
 //   EXPECT_EQ(50.3321, squareRoot(2533.310224));
}

TEST(SquareRootTest, ZeroAndNegativeNos){
    ASSERT_EQ(0.0, squareRoot(0.0));
    ASSERT_EQ(-1, squareRoot(-22.0));
}

int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "gtest_example");

  return RUN_ALL_TESTS();
}

