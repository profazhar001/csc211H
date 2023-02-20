//
// Created by Peter Vaiciulis on 2/20/23.
//
#include "../git/code/exercises/easy/sum_square_difference/sum_square_difference.cpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test sum_square_difference function") {
    REQUIRE(sum_square_difference(1) == 0);
    REQUIRE(sum_square_difference(10) == 2640);
    REQUIRE(sum_square_difference(100) == 25164150);
}