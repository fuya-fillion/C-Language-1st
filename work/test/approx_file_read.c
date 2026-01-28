#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int scannum;
    double pi_approx, e_approx, c_approx;


    FILE *file = fopen("approx.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Cannot open file 'approx.txt'.\n");
        exit(1);
    }

    scannum = fscanf(file, "PI: %lf\n", &pi_approx);
    if (scannum != 1) {
        fprintf(stderr, "Error: Cannot read PI from file.\n");
        exit(1);
    }

    scannum = fscanf(file, "e : %lf\n", &e_approx);
    if (scannum != 1) {
        fprintf(stderr, "Error: Cannot read e from file.\n");
        exit(1);
    }

    scannum = fscanf(file, "C : %lf\n", &c_approx);
    if (scannum != 1) {
        fprintf(stderr, "Error: Cannot read C from file.\n");
        exit(1);
    }

    fclose(file);

    printf("Approximation values loaded from file:\n");
    printf("PI: %.3f\n", pi_approx);
    printf("e : %.3f\n", e_approx);
    printf("C : %.3f\n", c_approx);

    return 0;
}

