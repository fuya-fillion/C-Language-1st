#include <stdio.h>
int main(void) {
    int a;

    printf("Please input an integer: ");
    scanf("%d",&a);

    printf("Twice of %d is %d.\n",a,a*2);
    printf("Tree times of %d is %d.\n",a,a*3);

    return 0;
}