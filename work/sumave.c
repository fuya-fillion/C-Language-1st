#include <stdio.h>
int main(void) {
    double a,b,c,Sum,Ave;
    printf("Input three integers;\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    Sum=a+b+c;
    Ave=Sum/3;
    printf("Sum is %.0f, average is %.1f\n", Sum,Ave);
    return 0;
}

  