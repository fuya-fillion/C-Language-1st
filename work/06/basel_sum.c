#include <stdio.h>

int main(void) {
    int n, k;
    double sum = 0;

    //Enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //Compute the partial sum of 1/k^2
    for (k = 1; k <=n; k++) {
        sum = sum + (double)1 / (k * k);
    }

    //Output the result
    printf("Approximation of sum: %.4f\n", sum);

    return 0;
}