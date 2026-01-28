#include <stdio.h>
int main(void) {
    int a,b,c,Sum,Ave;
    printf("Input three integers;\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    Sum=a+b+c;
    Ave=Sum/3;
    printf("Sum is %d, average is %d\n", Sum,Ave);
    return 0;
}

  