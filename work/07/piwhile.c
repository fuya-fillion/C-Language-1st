#include <stdio.h>
int main(void) {
    int i = 0, N;
    double Sum = 0;
    printf("Input positive integer:");
    scanf("%d", &N);
    while (i<=N) {
        if (i % 2 == 0) {
            Sum = Sum + (double)4 / (2 * i + 1);
            i++;
        } else {
            Sum = Sum - (double)4 / (2 * i + 1);
            i++;
        }
    }
    printf("Sum is %.6f.\n", Sum);
    return 0;
}