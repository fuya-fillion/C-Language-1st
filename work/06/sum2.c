#include <stdio.h>
int main(void) {
    int Sum = 0, i;
    printf("Sum=%d\n", Sum);
    for (i=100; i>=1; i--) {
        Sum = Sum+i ;
        printf("+[%d] =%d \n", i, Sum);
    }
    printf("Answer is %d.\n", Sum);
    return 0;
}