//
// Created by Peter Vaiciulis on 2/20/23.
//

#include "../code/exercises/medium/sieve/sieve_of_eratosthenes.cpp"
#include <catch2/catch_test_macros.hpp>


TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Printing Primes up to 10"){
    REQUIRE(sieve_of_eratosthenes(10) == std::vector<int>{2, 3, 5, 7});
}

TEST_CASE("Printing Primes up to 100"){
    REQUIRE(sieve_of_eratosthenes(100) == std::vector<int>{
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
    });
}