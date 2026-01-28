#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846264338327950288
#endif

int main(void) {
    int trials, i, R;
    double x, y, r, Error;
    
    srand((unsigned)time(NULL));
    printf("How meny trials? ");
    scanf("%d", &trials);
    for (i = 1; i <= trials; i++) {
        x = (rand()/(RAND_MAX+1.0)*M_PI);
        y = rand()/(RAND_MAX+1.0);
        if (y < sin(x)) {
            R += 1;
        }
    }

    r = (double) R / trials;
    Error = (double)(2 / M_PI) - r;

    printf("\nResult is %.6f (Error: %.6f)\n", r, Error);

    return 0;

}