#include <stdio.h>
int main(void) {
    int Sum = 0, i;
    i = 1;
    while (i<=100) {
        Sum += i;
        i++;
    }
    printf("Answer is %d.\n", Sum);
    return 0;
}