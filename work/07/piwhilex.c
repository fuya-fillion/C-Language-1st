#include <stdio.h>

int main(void) {
    int i = 0, j = 1, N;
    double Sum = 0, E;
    printf("Input error :");
    scanf("%lf", &E);
    while (1) {
        Sum = Sum + (double)4 * j / (2 * i + 1);
        j = (-1) * j;
        i++;
        if (Sum > 3.1415 - E && Sum < 3.1415 + E) break;
        N += 1;
    }
    printf("N is %d.\n", N);
    return 0;
}