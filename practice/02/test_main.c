#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

int main(int argc, char **argv) {
    srand((unsigned)time(NULL));
    Matrix a, b, A, t_a, res_add, res_scale;
    fprintf(stdout, "Input rows and cols of Matrix A: ");
    if (fscanf(stdin, "%d", &a.rows)!=1) {
        printf("入力エラー\n");
        return EXIT_FAILURE;
    }
    a.cols = a.rows;
    b.rows = a.cols;
    fprintf(stdout, "Input cols of Matrix B: ");
    if (fscanf(stdin, "%d", &b.cols)!=1) {
        printf("入力エラー\n");
        return EXIT_FAILURE;
    }
    A.rows = a.rows;
    A.cols = b.cols;
    t_a.rows = a.cols;
    t_a.cols = a.rows;
    res_add.rows = a.rows;
    res_add.cols = a.cols;
    res_scale.rows = a.rows;
    res_scale.cols = a.cols;
    init_matrix(&a);
    init_matrix(&b);
    init_matrix(&A);
    init_matrix(&t_a);
    init_matrix(&res_add);
    init_matrix(&res_scale);
    setup_matrix(&a);
    setup_matrix(&b);
    transmit_matrix(&a, &t_a);
    add_matrix(&a, &t_a, &res_add);
    cul_matrix(&a, &b, &A);
    scale_matrix(&a, (double)3, &res_scale);
    // --- 2次形式の標準化 判定テスト ---
    if (a.rows == a.cols) { // まず正方行列であること
        Matrix at;
        at.rows = a.rows; at.cols = a.cols;
        init_matrix(&at);
        transmit_matrix(&a, &at); // aの転置をatに作る

        int is_sym = 1;
        for (int i = 0; i < a.rows; i++) {
            for (int j = 0; j < a.cols; j++) {
                if (a.data[i][j] != at.data[i][j]) {
                    is_sym = 0; // 一箇所でも違えば対称じゃない
                    break;
                }
            }
        }

        if (is_sym) {
            printf(">> この行列は実対称行列です。標準化が可能です！\n");
        } else {
            printf(">> この行列は対称行列ではありません。\n");
        }
        free_matrix(&at);
    }
    show_matrix("A", &a);
    show_matrix("B", &b);
    show_matrix("A×B", &A);
    show_matrix("3倍のA", &res_scale);
    show_matrix("Matrix after trans", &t_a);
    show_matrix("A+t_A", &res_add);
    free_matrix(&a);
    free_matrix(&b);
    free_matrix(&t_a);
    free_matrix(&A);
    free_matrix(&res_add);
    free_matrix(&res_scale);
    return EXIT_SUCCESS;
}