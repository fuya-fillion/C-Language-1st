#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Return absolute error
double absoluteError(double approx, double exact) {
    if (approx > exact)
        return approx - exact;
        else
        return exact - approx;
}

int main(void) {
    int n, i, count = 0;
    double x, y, approx, exact = 9.0, error;

    // Initialize random number generator
    srand((unsigned)time(NULL));

    // Enter number of trails
    printf("How many trials? ");
    scanf("%d", &n);

    // Count points under the curve y = x^2 in the rectangle [0, 3] × [0, 9]
    for (i = 0; i < n; i++) {
        x = rand() / (RAND_MAX + 1.0) * 3.0;  // Random x in [0, 3)
        y = rand() / (RAND_MAX + 1.0) * 9.0;  // Random y in [0, 9)
        if (y <= x * x) {
            count++;    // Count if point is under the curve y = x^2
        }
    }

    // Calculate approximation of the integral and absolute error
    approx = 3.0 * 9.0 * count / n;
    error = absoluteError(approx, exact);

    // print result
    printf("Approximate value of the integral: %.5f (Error: %.5f)\n", approx, error);

    return 0;
}