#include <stdio.h>
#include <math.h>

// Function: mutiply two complex numbers
void cmul(double c1_re, double c1_im, double c2_re, double c2_im, double *res_re, double *res_im) {
    *res_re = c1_re * c2_re - c1_im * c2_im; // calculate real part
    *res_im = c1_re * c2_im + c1_im * c2_re; // calculate imaginary part
}

int main(void) {
    double c_re = 1.0 / sqrt(2);
    double c_im = 1.0 / sqrt(2);
    double res_re, res_im;

    // 1st squaring: z^2
    cmul(c_re, c_im, c_re, c_im, &res_re, &res_im);

    // 2nd squaring: (z^2)^2 = z^4
    cmul(res_re, res_im, res_re, res_im, &res_re, &res_im);

    // 3rd squaring: (z^4)^2 = z^8
    cmul(res_re, res_im, res_re, res_im, &res_re, &res_im);

    // Display the result of z^8
    printf("Result: %.4f + %.4f i\n", res_re, res_im);

    return 0;
}