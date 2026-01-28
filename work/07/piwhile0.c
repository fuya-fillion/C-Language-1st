#include <stdio.h>

int main(void) {
    int i = 0, j = 1, N;
    double Sum = 0;
    printf("Input positive integer:");
    scanf("%d", &N);
    while (i<=N) {
        Sum = Sum + (double)4 * j / (2 * i + 1);
        j = (-1) * j;
        i++;
        }
    printf("Sum is %.6f.\n", Sum);
    return 0;
}