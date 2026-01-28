#include <stdio.h>
#define PI_REF 3.14159
#define NUM_TERMS 20

int main(void) {
    double terms[NUM_TERMS];    // Array to store each term of the series
    double partial_sum = 0.0;   // Partial sum of the series before multiplying by 4
    double pi_approx, error;
    int i, sign = 1;

    // Print table header
    printf("k\t pi approx.\t Absolute error\n");

    for (i = 0; i < NUM_TERMS; i++) {
        // Compute the i-th term of the series
        terms[i] = sign * 1.0 / (2 * i + 1);
        
        // Compute the approximation of pi
        partial_sum += terms[i];
        pi_approx = 4.0 * partial_sum;

        // Compute absolute error
        error = pi_approx - PI_REF;
        if (error < 0) error = -error;

        // Display the approximation of pi and error
        printf("%2d\t %.5f\t %.5f\n", i, pi_approx, error);
        
        // Frip sign
        sign = -sign;
    }
    
    return 0;
}