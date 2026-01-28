#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <libavutil/mathematics.h>  // For M_PI

int main(void) {
    int n, i, count = 0;
    double x, y, pi_approx, error;

    // Initialize random number generator
    srand((unsigned)time(NULL));

    // Enter number of trails
    printf("How many trials? ");
    scanf("%d", &n);

    // Count points inside quarter circle
    for (i = 0; i < n; i++) {
        x = rand() / (RAND_MAX + 1.0);  // Random x in [0, 1)
        y = rand() / (RAND_MAX + 1.0);  // Random y in [0, 1)
        if (x * x + y * y <= 1.0) {
            count++;    // Count if point is inside the quarter circle
        }
    }

    // Calculate approximation of pi and absolute error
    pi_approx = 4.0 * count / n;
    error = fabs(pi_approx - M_PI);

    // print result
    printf("Approximated pi: %.5f (Error: %.5f)\n", pi_approx, error);

    return 0;
}