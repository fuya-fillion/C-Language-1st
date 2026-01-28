#include <stdio.h>
int main(void) {
    int Sum = 0, i = 1;
    do {
        Sum += i;
        i++;
    } while (i<=100);
    printf("Answer is %d.\n", Sum);
    return 0;
}