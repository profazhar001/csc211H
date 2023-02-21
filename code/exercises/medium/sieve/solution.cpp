//
// Problem added by Peter V. (github.com/p5quared)
//
#include <vector>

// Here is a possible solution to the problem.
std::vector<int> sieve_of_eratosthenes(int n) {
    // start with a list of all numbers from 2 to n
    std::vector<int> primes;
    for (int i = 2; i <= n; i++) {
        primes.push_back(i);
    }

    // now just remove all multiples of p
    for (auto it = primes.begin(); it != primes.end(); it++) {
        int p = *it;
        while (p <= n) {
            // *it is the current prime number
            // so p += it is the next multiple of it
            p += *it;
            if (p <= n) {
                // here is the actual statement to remove p * np
                primes.erase(std::remove(primes.begin(), primes.end(), p), primes.end());
            }
        }
    }
    return primes;
}