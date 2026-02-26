#include "gtest/gtest.h"
#include "../include/State.hpp"
#include <array>

TEST(TEST_STATE, CONSTRUCTION) {
  State s1; // should be zero state
  State s2(1, 2, 3, 4);
  std::array<double, 4> vals = {2, 2, 2, 2};
  State s3(vals);

  // checking for the vals
  EXPECT_EQ(s1[0], 0.0); EXPECT_EQ(s1[1], 0.0); EXPECT_EQ(s1[2], 0.0); EXPECT_EQ(s1[3], 0.0); /* s1 */
  EXPECT_EQ(s2[0], 1.0); EXPECT_EQ(s2[1], 2.0); EXPECT_EQ(s2[2], 3.0); EXPECT_EQ(s2[3], 4.0); /* s2 */
  EXPECT_EQ(s3[0], 2.0); EXPECT_EQ(s3[1], 2.0); EXPECT_EQ(s3[2], 2.0); EXPECT_EQ(s3[3], 2.0); /* s3 */
}

TEST(TEST_STATE, OPERATORS) {
  State s1(0, 0, 0, 0);
  State s2(1, 2, 3, 4);
  State s3(1, 2, 3, 4);
  State s4(2, 4, 6, 8);
  
  // operator[] test
  EXPECT_EQ(s1[0], 0.0); EXPECT_EQ(s1[1], 0.0); EXPECT_EQ(s1[2], 0.0); EXPECT_EQ(s1[3], 0.0);
  // operator== test
  EXPECT_TRUE(s2 == s3); EXPECT_FALSE(s1 == s2);
  // operator+= test
  State s5(0, 0, 0, 10); s5 += s4; State s6(2, 4, 6, 18);
  EXPECT_TRUE(s5 == s6);
  // operator*= test
  s3 *= 2;
  EXPECT_TRUE(s3 == s4);
  s3 = State(1, 2, 3, 4);
  // operator+ test
  EXPECT_TRUE(s2 + s3 == s4);
  // operator* test
  EXPECT_TRUE(s2 * 2 == s4);
  EXPECT_TRUE(2 * s2 == s4);
}