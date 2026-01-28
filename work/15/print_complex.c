#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    double real;    // real part
    double imag;    // imaginary part
};

// Function to print a complex number
void printComplex(struct Complex compNum) {
    printf("Complex number    : ");

    if (compNum.imag >= 0) {
        printf("%.1f + %.1fi", compNum.real, compNum.imag);
    } else {
        printf("%.1f - %.1fi", compNum.real, -compNum.imag);
    }

    printf("\n");
}

int main(void) {
    struct Complex compNum;

    // Input the complex number
    printf("Input the complex number a + bi\n");
    printf("real part (a)     : ");
    scanf("%lf", &compNum.real);
    printf("imaginary part (b): ");
    scanf("%lf", &compNum.imag);

    // Print the complex number
    printComplex(compNum);

    return 0;
}