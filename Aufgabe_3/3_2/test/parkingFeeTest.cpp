#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "parkingFee.hpp"
TEST_CASE("First hour costs 2 euros")
{
    REQUIRE(calculateFee(1) == 2.0);
}