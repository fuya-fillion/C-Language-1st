#include <stdio.h>

// Function: calculate sum, difference, product (uses pointers)
void calculate(int a, int b, int *res_sum, int *res_diff, int *res_prod) {
    *res_sum = a + b;
    *res_diff = a - b;
    *res_prod = a * b;
}

int main(void) {
    int num1 = 15, num2 = 10;
    int sum, diff, prod;

    // Call function with pointers
    calculate(num1, num2, &sum, &diff, &prod);

    // Display results
    printf("%d + %d = %3d\n", num1, num2, sum);
    printf("%d - %d = %3d\n", num1, num2, diff);
    printf("%d * %d = %3d\n", num1, num2, prod);

    return 0;
}