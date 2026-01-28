#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setup_matrix(double **mp, int m, int n) {                          //ランダムなM×N行列を与える関数

    srand((unsigned)time(NULL));                                        //現在時刻により初期化

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            mp[i][j] = (double) rand () / (RAND_MAX + 1.0) * 10;
        }
    }
}

int main(int argc, char **argv){
    int M = 5;
    int N = 3;

    //空のM×N行列を２つ用意
    double **A;
    A = (double **)malloc(sizeof(double * ) * M);
    for (int i = 0; i < M; i++) {
        A[i] = (double *)malloc(sizeof(double * ) * N);
    }

    setup_matrix(A, M, N);

    double **B;
    B = (double **)malloc(sizeof(double * ) * M);
    for (int i = 0; i < M; i++) {
        B[i] = (double *)malloc(sizeof(double) * N);
    }
    
    setup_matrix(B, M, N);

    //和を入れるM×N行列を用意
    double **S;

    S = (double **)malloc(sizeof(double * ) * M);
    for (int i = 0; i < M; i++) {
        S[i] = (double *)malloc(sizeof(double) * N); 
    }

    //和Sを計算する
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    
    //和を表示する
    for (int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            fprintf(stdout, "A[%d][%d] + B[%d][%d] = %.6lf\n", i, j, i, j, S[i][j]);
        }
    }

    return EXIT_SUCCESS;
} 