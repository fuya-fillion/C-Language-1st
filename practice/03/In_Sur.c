#include <stdio.h>
#include <stdlib.h>
#include "../02/matrix.h"

int main (int argc, char **argv) {
    Matrix a;
    double determinant;
    a.rows = 2; a.cols = 2;
    init_matrix(&a);
    fprintf(stdout, "Determine Bejectivity of your matrix\nInput your matrix: \n");
    for (int i=0; i<2;i++ ) {
        for (int j=0; j<2; j++) {
            fprintf(stdout, "matrix[%d][%d]: ", i, j);
            fscanf(stdin, "%lf", &a.data[i][j]);
        }
    }
    determinant = a.data[0][0] * a.data[1][1] - a.data[1][0] * a.data[0][1];
    if (determinant == 0.0) {
        fprintf(stdout, "Your matrix isn't Bijective.\n");
    } else {
        fprintf(stdout, "Your matrix is Bijective.\n");
    }
    for (int i = 0; i < a.rows; i++) {
        free(a.data[i]);
    }
    free(a.data);
    return EXIT_SUCCESS;
}