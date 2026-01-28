#include <stdio.h>
#include <math.h>
int main(void) {
    int x,y,z,f,X,Z;
    printf("Calculate f=x^2+2xy-z^2+xyz\n Input number into x: ");
    scanf("%d",&x);
    printf("Input next number into y: ");
    scanf("%d",&y);
    printf("Input last number into z: ");
    scanf("%d",&z);
    X=x*x;
    Z=z*z;
    f=X+2*x*y-Z+x*y*z;
    printf("f is %d\n", f);
    return 0;
}