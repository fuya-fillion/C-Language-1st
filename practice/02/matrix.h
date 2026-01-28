#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    double **data;
} Matrix;

void init_matrix(Matrix *m);
void setup_matrix(Matrix *m);
void add_matrix(const Matrix *a, const Matrix *b, Matrix *res);
void cul_matrix(const Matrix *m, const Matrix *n, Matrix *M);
void scale_matrix(const Matrix *m, double k, Matrix *res);
void transmit_matrix(const Matrix *m, Matrix *n);
void show_matrix(const char *name, const Matrix *m);
void free_matrix(Matrix *m);

#endif