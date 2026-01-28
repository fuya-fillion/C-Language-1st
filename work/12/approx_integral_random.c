#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function: y = x^3
double func(double x) {
    return x * x * x;
}

// Approximate the integral of a function using random sampling over [0, b] x [0, y_max]
double approxInt(int n, double b, double y_max) {
    int i, count = 0;
    double x, y;

    // Perform random sampling to count points under the curve
    for (i = 0; i < n; i ++) {
        x = rand() / (RAND_MAX + 1.0) * b;  // Random x in [0, b)
        y = rand() / (RAND_MAX + 1.0) * y_max;   // Random y in [0, y_max)
        if (y <= func(x)) {
            count++;
        }
    }

    // Calculate the approximate value of the integral
    return b * y_max * count / n;
}

int main(void) {
    int n;
    double b, y_max;
    double approx;

    // Initialize random number generator
    srand((unsigned)time(NULL));

    // User input
    printf("How many trials? ");
    scanf("%d", &n);

    printf("Enter the upper limit of integration (b): ");
    scanf("%lf", &b);

    printf("Enter the maximam value of the function over [0, b] (y_max): ");
    scanf("%lf", &y_max);

    // Approximate the integral
    approx = approxInt(n, b, y_max);

    // Print result
    printf("Approximate value of the integral: %.5f\n", approx);

    return 0;
}