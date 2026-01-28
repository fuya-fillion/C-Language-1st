#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 2

typedef struct {
    double data[N][N];
} Matrix2x2;

void setup(Matrix2x2 *mp);

void multiply_matrices_ptr(const Matrix2x2 *a, const Matrix2x2*b, Matrix2x2 *res);

int main(int argc, char **argv) {
    Matrix2x2 a, b, res;

    srand((unsigned)time(NULL));

    setup(&a);
    setup(&b);

    multiply_matrices_ptr(&a, &b, &res);

    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            fprintf(stdout, "%4.2f ", res.data[i][j]);
        }
        fprintf(stdout, "\n");
    }

    return EXIT_SUCCESS;
}

void setup(Matrix2x2 *mp) {
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            mp->data[i][j] = rand()%20;
        }
    }
}

void multiply_matrices_ptr(const Matrix2x2 *a, const Matrix2x2 *b, Matrix2x2 *res) {
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            res->data[i][j] = 0;
            for (int k=0;k<N;k++) {
                res->data[i][j] += a->data[i][k]*b->data[k][j];
            }
        }
    }
}
