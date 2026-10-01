#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include "math_funcs.h"

TEST_CASE("Linear Interpolation Calculation", "[interpolation]") {
    
    REQUIRE(linear_interpolation(0.0, 0.0, 10.0, 100.0, 5.0) == Catch::Approx(50.0));
    
    REQUIRE(linear_interpolation(1.0, 1.0, 3.0, 5.0, 2.0) == Catch::Approx(3.0));
}