#include <stdio.h>
int main(void) {
    int a, b, c, F;
    printf("I calcurate F = ( a + b ) * c.\n");
    printf("Input three numbers.\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    
    F = ( a + b ) * c;

    printf("F = %d.\n", F);
    return 0;
    
}