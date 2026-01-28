#include <stdio.h>
int main(void) {
    int Sum = 0, i;
    printf("Sum=%d\n", Sum);
    for (i=1; i <= 100; i=i+1) {
        Sum = Sum + i ;
        printf("+[%d] =%d \n", i, Sum);
    }
    printf("Answer is %d.\n", Sum);
    return 0;
}