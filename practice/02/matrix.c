#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


void init_matrix(Matrix *m) {

    m->data = (double **)malloc(sizeof(double *) * m->rows);

    if (m->data == NULL) exit(EXIT_FAILURE);

    for (int i=0;i<m->rows;i++) {
        m->data[i] = (double *)malloc(sizeof(double) * m->cols);
        if (m->data[i] == NULL) exit(EXIT_FAILURE);
        for (int j=0;j<m->cols;j++) {
            m->data[i][j] = 0.0;
        }
    }
}

void setup_matrix(Matrix *m) {
    for (int i=0;i<m->rows;i++) {
        for (int j=0;j<m->cols;j++) {
            m->data[i][j] = rand()%20;
        }
    }
}

void add_matrix(const Matrix *a, const Matrix *b, Matrix *res) {
    printf("Debug: add_matrix start. size=%dx%d\n", a->rows, a->cols);
    for (int i = 0; i < a->rows; i++) {
        for (int j = 0; j < a->cols; j++) {
            // ここで落ちるなら、データアクセスが原因！
            printf("Debug: Accessing [%d][%d]\n", i, j); 
            res->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    printf("Debug: add_matrix end.\n");
}

void cul_matrix(const Matrix *m, const Matrix *n, Matrix *M) {
    for (int i=0;i<M->rows;i++) {
        for (int j=0;j<M->cols;j++) {
            for (int k=0;k<m->cols;k++) {
                M->data[i][j] += (m->data[i][k])*(n->data[k][j]);
            }
        }
    }
}

void scale_matrix(const Matrix *m, double k, Matrix *res) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            res->data[i][j] = m->data[i][j] * k;
        }
    }
}

void transmit_matrix(const Matrix *m, Matrix *n) {
    for (int i=0;i<m->rows;i++) {
        for (int j=0;j<m->cols;j++) {
            n->data[j][i] = m->data[i][j];
        }
    }
}

void show_matrix(const char *name, const Matrix *m) {
    printf("%s (%d x %d) = \n", name, m->rows, m->cols);
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("%4.1f ", m->data[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void free_matrix(Matrix *m) {
    if (m->data == NULL) return;

    for (int i=0;i<m->rows;i++) {
        free (m->data[i]);
    }
    free(m->data);
    m->data = NULL;
}