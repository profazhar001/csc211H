//
// Created by Peter Vaiciulis on 2/20/23.
//

#include "../git/code/exercises/easy/collatz_conjecture/solution.cpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Collatz Conjecture"){
    REQUIRE(collatz(1) == 0);
    REQUIRE(collatz(16) == 4);
    REQUIRE(collatz(12) == 9);
    REQUIRE(collatz(1000000) == 152);
}