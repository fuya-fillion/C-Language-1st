#include <stdio.h>
#include <math.h>

double max(double a, double b) {
    if (a<b) return b;
    else return a;
}

int main(void) {
    double x, y;
    printf("Input x:");
    scanf("%lf", &x);
    y = max(x, -x);
    y = max(y, x*x);
    y = max(y,sqrt(fabs(x)));

    printf("Answer is %f.\n", y);
    return 0;
}