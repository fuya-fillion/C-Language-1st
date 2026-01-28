#include <stdio.h>

int main(void) {
    // step 1
    int a, b, c, e, f;
    double d;

    //step2
    a=7, b=2, e=4, f=3;

    //step3
    printf("c = ");
    scanf("%d",&c);
    printf("d = ");
    scanf("%lf",&d);

    //step4
    printf("Answer is %.3f. \n", a%b+c*d-(double)e/f);
    
    return 0;
}