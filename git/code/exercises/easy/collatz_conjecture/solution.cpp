//
// Created by Peter Vaiciulis on 2/20/23.
//

// Here is a possible solution to the Collatz Conjecture exercise.
int collatz(int n){
    int steps = 0;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}