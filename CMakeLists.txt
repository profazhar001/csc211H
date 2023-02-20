cmake_minimum_required(VERSION 3.15)
project(CSC-211-Project)
set(CMAKE_CXX_STANDARD 17)
include_directories(.)

# ----Catch2----
Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1
)
FetchContent_MakeAvailable(Catch2)

# --Sum of Squares--
add_executable(test_sum_square testing/sum_square_tests.cpp)
target_link_libraries(test_sum_square Catch2::Catch2WithMain)

# --Sieve--
add_executable(test_sieve testing/sieve_tests.cpp)
target_link_libraries(test_sieve Catch2::Catch2WithMain)

# -- Collatz --
add_executable(test_collatz testing/collatz_tests.cpp)
target_link_libraries(test_collatz Catch2::Catch2WithMain)
