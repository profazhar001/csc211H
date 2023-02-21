//
// Problem added by Peter V. (github.com/p5quared)
//

// Here is one possible solution
int sum_square_difference (int n) {
    int sum_of_squares = 0;
    int square_of_sum = 0;
    for (int i = 1; i <= n; i++) {
        sum_of_squares += i * i;
        square_of_sum += i;
    }
    square_of_sum *= square_of_sum;
    return square_of_sum - sum_of_squares;
}