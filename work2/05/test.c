#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func1(double);
double func2(double);
double derivative(double,double(*)(double));

int main(int argc, char **argv) {
    double (*pfunc)(double);
    double a = 0.0;

    for (int i = 0; i < 2; i++) {
        if (i%2 == 0) {
            pfunc = func1;
        } else {
            pfunc = func2;
        }
        while (a <= 1.0) {
        fprintf(stdout ,"%lf\t%lf\n", a, derivative(a, pfunc));
        a += 0.001;
        }
        a = 0.0;
    }

    return EXIT_SUCCESS;
}

double func1 (double x) {
    return sin(x);
}

double func2 (double x) {
    return x*x*x;
}

double derivative(double x,double(*pfunc)(double)) {
    double h = 0.00001;
    return (pfunc(x + h) - pfunc(x)) / h;
}