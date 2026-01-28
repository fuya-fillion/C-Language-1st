#include <stdio.h>
int main(void){
    int Age;
    printf("Input your age: ");
    scanf("%d", &Age);
    Age = (Age - 18) * 3 + 2;
    printf("Lucky number is %d.\n", Age);
    /*がんばって！！*/
    return 0;
}