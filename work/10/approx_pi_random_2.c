#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <libavutil/mathematics.h>  // For M_PI

int main(void) {
    int n, i, count;
    double x, y, pi_approx, error;
    int trials;     // Number of trails in each experiment

    // Initialize random number generator
    srand((unsigned)time(NULL));

    // Print table header
    printf("Trials\t pi approx.\t Absolute error\n");

    //Repeat for different powers of 10
    for (n = 1; n <= 5; n++) {
        trials = (int)pow(10, n); // Set number of trials to 10^n
        count = 0;                // Reset count before each experiment

        // Count points inside quarter circle
        for (i = 0; i < trials; i++) {
            x = rand() / (RAND_MAX + 1.0);  // Random x in [0, 1)
            y = rand() / (RAND_MAX + 1.0);  // Random y in [0, 1)
            if (x * x + y * y <= 1.0) {
                count++;    // Count if point is inside the quarter circle
            }
        }

        // Calculate approximation of pi and absolute error
        pi_approx = 4.0 * count / trials;
        error = fabs(pi_approx - M_PI);

        // print result
        printf("10^%d\t %.5f\t %.5f\n", n, pi_approx, error);
    }

    return 0;
}