#include <stdio.h>
#define NUM_TERMS 20

int main(void) {
    double terms[NUM_TERMS];    // Array to store each term of the series
    double partial_sum = 0.0;   // Partial sum of the series before multiplying by 4
    double pi_approx;
    int i, sign = 1;

    for (i = 0; i < NUM_TERMS; i++) {
        // Compute the i-th term of the series
        terms[i] = sign * 1.0 / (2 * i + 1);
        
        // Compute the approximation of pi
        partial_sum += terms[i];
        pi_approx = 4.0 * partial_sum;
        
        // Frip sign
        sign = -sign;
    }

    // Display the approximation if pi
    printf("Approximation of pi: %.5f\n", pi_approx);
    
    return 0;
}