#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_E
#define M_E 2.718281828459045235360287471352662497757247093699959574966967627724076
#endif

int main(void) {
    double x, y,error, Error;
    int i, r;
    printf("Set Error: ");
    scanf("%lf\n", &error);
    while (1) {
        r ++;
        srand ((unsigned)time(NULL));
        x = (rand()/(RAND_MAX+1.0)*M_E - 1.0) + 1.0;
        y = (rand()/(RAND_MAX+1.0));
        if (y < log(x)) {
            i++;
        }
        Error = i / r - 1;
        if (Error < 0) Error = -Error;
        if (Error < error) break;
    }

    Printf("The result is %d, Error is %.6f.\n", r, Error);

    return 0;
}