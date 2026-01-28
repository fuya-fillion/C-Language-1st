#include <stdio.h>
int main(void) {
    int n, N, Sum=0;
    printf("Input number N: ");
    scanf("%d", &N);
    for ( n = 1 ; n <= N ; n++ ) {
        Sum = Sum + 2*n - 1;
    }
    printf("Answer is %d.\n", Sum);
    return 0;
}