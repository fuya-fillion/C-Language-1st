#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <libavutil/mathematics.h>

double PI_approx(int trials) {
    int i, count = 0;
    double x, y, pi_approx;

    srand((unsigned)time(NULL));

    for (i = 0; i < trials; i++) {
        x = rand() / (RAND_MAX + 1.0);
        y = rand() / (RAND_MAX + 1.0);
        if (x * x + y * y <= 1.0) {
            count++;
        }
    }

    pi_approx = 4.0 * count / trials;

    return pi_approx;
}

double E_approx(int trials) {;
    double  e_approx;

    e_approx = pow(1.0 + 1.0 / trials, trials);

    return e_approx;
}

double C_approx(int trials) {
    int k;
    double c_approx = -log(trials);

    for (k = 1; k <= trials; k++) {
        c_approx += (double)1.0 / k;
    }

    return  c_approx;
}

int main(void) {
    int trials, scannum;
    double pi_approx, e_approx, c_approx;

    printf("How many trials? ");
    scanf("%d", &trials);

    pi_approx = PI_approx(trials);
    e_approx  = E_approx(trials);
    c_approx  = C_approx(trials);

    FILE *file = fopen("approx.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error: Cannot open file 'approx.txt'.\n");
        exit(1);
    }

    fprintf(file, "PI: %.3f\n", pi_approx);
    fprintf(file, "e : %.3f\n", e_approx);
    fprintf(file, "C : %.3f\n", c_approx);

    fclose(file);

    printf("Approximation values has been written to 'approx.txt'.\n");

    return 0;
}

