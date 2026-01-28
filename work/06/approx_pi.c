#include <stdio.h>

int main(void) {
    int n,k;
    double sum = 0, approx_pi;

    //Enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //Calculate the alternatimg series
    for (k = 0; k <= n; k++) {
        if (k % 2 == 0) {//Even term:add
            sum = sum + (double)1 / (2 * k + 1);
        } else {//Odd term: subtract
            sum = sum - (double)1 / (2 * k + 1);
        }
    }

    //Multiply by 4 to approximate pi
    approx_pi = 4.0 * sum;

    //Output the result
    printf("Approximation of pi: %.7f\n", approx_pi);

    return 0;
}