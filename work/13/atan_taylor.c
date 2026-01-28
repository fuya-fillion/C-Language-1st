#include <stdio.h>
#include <math.h>

// Custom function to calculate arctan(x) using Tatlor series (pointer version)
void atan_taylor(double x, int numTerms, double *approx) {
    int k;
    double sum = 0.0;

    for (k = 0; k <= numTerms; k ++) {
        sum += pow(-1.0, k) * pow(x, 2 * k + 1) / (2.0 * k + 1);
    }

    * approx = sum;
}

int main(void) {
    int exp;        // Exponent for 10^exp
    int numTerms;   // Number of terms in the Taylor series
    double approx;  // Variable to store the approximation result

    // Display the value calculated using the standard atan function
    printf("4 *        atan(1.0) = %.7f\n", 4 * atan(1.0));

    // Display values calculated using the custom atan_taylor function for different term counts
    for (exp = 1; exp <= 6; exp++) {
        numTerms = (int)pow(10, exp) ;
        atan_taylor(1.0, numTerms, &approx);
        printf("4 * atan_taylor(1.0) = %.7f (numTerms = 10^%d)\n", 4 * approx, exp);
    }

    return 0;
}