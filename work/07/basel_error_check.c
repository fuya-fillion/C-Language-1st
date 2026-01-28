#include <stdio.h>

int main(void) {
    double error;   //Acceptable error tolerance
    double pi = 3.14159;                //Approximate value of pi
    double ref_value = (pi * pi) / 6.0; //Theoretical reference value
    int k = 1;          //Term counter
    double sum = 0.0;   //Sum of the series 1/k^2
    double diff;        //Difference between approximation and reference

    //Enter error tolerance
    printf("Enter error tolerance: ");
    scanf("%lf", &error);

    //Loop under error is below target
    while (1) {
        sum += (double)1 / (k * k); //Add 1/k^2 to sum
        diff = sum - ref_value;        //Compute the difference (error)

        //Compute absolute error
        if (diff < 0.0) diff = -diff;

        //Break loop if error is within acceptable range
        if (diff < error) break;

        k++;
    }

    //Output final result
    printf("Required N: %d\n", k);
    printf("Reference value: %.5f\n", ref_value);
    printf("Approximation  : %.5f\n", sum);
    printf("Error          : %.5f\n", diff);

    return 0;
}