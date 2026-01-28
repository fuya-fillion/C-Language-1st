#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double data[2][2];
} Matrix2x2;

void add_matrices_ptr(const Matrix2x2 *a, const Matrix2x2 *b, Matrix2x2 *res);

int main(int argc, char ** argv) {
    Matrix2x2 a, b, res;

    a.data[0][0] = 0; a.data[0][1] = 1; a.data[1][0] = 2; a.data[1][1] = 3;
    b.data[0][0] = 7; b.data[0][1] = 6; b.data[1][0] = 5; b.data[1][1] = 4;

    add_matrices_ptr(&a, &b, &res);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            fprintf(stdout, "%4.2f ", res.data[i][j]);
        }
        fprintf(stdout, "\n");
    }

    return EXIT_SUCCESS;
}

void add_matrices_ptr(const Matrix2x2 *a, const Matrix2x2 *b, Matrix2x2 *res) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
}