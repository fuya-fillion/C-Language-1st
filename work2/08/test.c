#include <stdio.h>
#include <stdlib.h>

int frac(int n);

int main(int argc, char **argv) {
    fprintf(stdout, "%d\n", frac(5));
    return EXIT_SUCCESS;
}

int frac(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * frac(n-1);
    }
}