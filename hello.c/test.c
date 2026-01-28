#include <stdio.h>
double d_t;
double omega[6];
double theta[6];
int main() {
    int n;
    double t;
    theta[0] = 0.1;
    omega[0] = 0.0;
    d_t = 0.5236;
    for (n=0; n<6; n++) {
        t =((double)n)*d_t;
        theta[n+1] =  d_t * omega[n] + theta[n];
        omega[n+1] = -d_t * theta[n] + omega[n];
    }
    printf("Address of d_t is %p, value=%6.4f", &d_t, d_t);
    printf("Address of t is %p, value=%6.4f\n", &t, t);
    for(n=0; n<=6; n++) {
        printf("Address of theta[%d] is %p, value=%6.4f, ", n, &theta[n], theta[n]);
        printf("Address of omega[%d] is %p, value=%6.4f\n", n, &omega[n], omega[n]);
    }
    return 0;
}