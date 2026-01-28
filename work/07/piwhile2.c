#include <stdio.h>
int main(void) {
    int i = 0, N;
    double Sum = 0, E;
    printf("Input error :");
    scanf("%lf", &E);
    while (1) {
        if (i % 2 == 0) {
            Sum = Sum + (double)4 / (2 * i + 1);
            i++;
        } else {
            Sum = Sum - (double)4 / (2 * i + 1);
            i++;
        }
        if (Sum > 3.1415 - E && Sum < 3.1415 + E) break;
        N += 1;
    }
    printf("N is %d.\n", N);
    return 0;
}