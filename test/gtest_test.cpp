
/*********************************************************************
* Software License Agreement (BSD License)
*
*
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* * Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
* * Redistributions in binary form must reproduce the above
* copyright notice, this list of conditions and the following
* disclaimer in the documentation and/or other materials provided
* with the distribution.
* * Neither the name of Willow Garage nor the names of its
* contributors may be used to endorse or promote products derived
* from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
* COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/

/* Author: Sina Nia Kosari */

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

