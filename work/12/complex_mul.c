#include <stdio.h>

// Function: multiply two complex numbers
void cmul(double c1_re, double c1_im, double c2_re, double c2_im, double *res_re, double *res_im) {
    *res_re = c1_re * c2_re - c1_im * c2_im;    // Calculate real part
    *res_im = c1_re * c2_im + c1_im * c2_re;    // Calculate imaginary part
}

int main(void) {
    // c1_re, c1_im: real and imaginary parts of the first complex number
    // c2_re, c2_im: real and imaginary parts of the second complex number
    // res_re, res_im: real and imaginary parts of the result
    double c1_re, c1_im, c2_re, c2_im, res_re, res_im;

    // Input the first complex number
    printf("Input c1_re + c1_im i:\n");
    printf("    c1_re: ");
    scanf("%lf", &c1_re);
    printf("    c1_im: ");
    scanf("%lf", &c1_im);

    // Input the second complex number
    printf("Input c2_re + c2_im i:\n");
    printf("    c2_re: ");
    scanf("%lf", &c2_re);
    printf("    c2_im: ");
    scanf("%lf", &c2_im);

    // Perform multiplication and store the results
    cmul(c1_re, c1_im, c2_re, c2_im, &res_re, &res_im);

    // Display the result
    printf("(c1_re + c1_im i) * (c2_re + c2_im i) = %.1f + %.1f i\n", res_re, res_im);

    return 0;
}