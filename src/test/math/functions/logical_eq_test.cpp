#include "stan/math/functions/logical_eq.hpp"
#include <gtest/gtest.h>

TEST(MathFunctions,logical_eq) {
  using stan::math::logical_eq;
  EXPECT_TRUE(logical_eq(1,1));
  EXPECT_TRUE(logical_eq(5.7,5.7));
  EXPECT_TRUE(logical_eq(0,0.0));

  EXPECT_FALSE(logical_eq(0,1));
  EXPECT_FALSE(logical_eq(1.0,0));
  EXPECT_FALSE(logical_eq(1, 2));
  EXPECT_FALSE(logical_eq(2.0, -1.0));
}
