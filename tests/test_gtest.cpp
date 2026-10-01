#include <gtest/gtest.h>
#include "math_funcs.h"

TEST(LinearInterpolationTest, BasicCases) {
    EXPECT_NEAR(linear_interpolation(0.0, 0.0, 10.0, 100.0, 5.0), 50.0, 0.001);
    
    EXPECT_NEAR(linear_interpolation(1.0, 1.0, 3.0, 5.0, 2.0), 3.0, 0.001);
}