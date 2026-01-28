#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void devide(double **mp, int i, int j);

void addition(double **mp, int i, int j, int k);

void setup_matrix(double **mp, double *b);

void input_matrix(double **MP, double **mp, double *b);

void output_matrix(double **MP, double **mp, double *b);

int main(int argc, char **argv){
    double b[2];
    int M = 3, N = 4;

    //空の3×3行列を用意
    double **a;
    a = (double **)malloc(sizeof(double * ) * M);
    for (int i = 0; i < M; i++) {
        a[i] = (double *)malloc(sizeof(double * ) * M);
    }

    setup_matrix(a, b);

    //空の3×4行列を用意
    double **T;
    T = (double **)malloc(sizeof(double * ) * M);
    for (int i = 0; i < M; i++) {
        T[i] = (double *)malloc(sizeof(double * ) * N);
    }

    input_matrix(T, a, b);

    devide(T, 0, 0);                   //一行一列目を１にする

    addition(T, 1, 0, 0);           //二行目に一行目の定数倍を足し、二行一列目を０にする
    addition(T, 2, 0, 0);           //三行目に一行目の定数梅を足し、三行一列目を０にする

    devide(T, 1, 1);                   //二行二列目を１にする

    addition(T, 2, 1, 1);           //三行目に二行目の定数倍を足し、三行二列目を０にする
    
    devide(T, 2, 2);                   //三行三列目を１にする

    addition(T, 1, 2, 2);           //二行目に三行目の定数倍を足し、二行三列目を０にする

    addition(T, 0, 2, 2);           //一行目に三行目の定数倍を足し、一行三列目を０にする
    addition(T, 0, 1, 1);           //一行目に二行目の定数倍を足し、一行二列目を０にする

    output_matrix(T, a, b);

    for (int i = 0; i < 3; i++) {
        fprintf(stdout, "%.6lf %.6lf %.6lf %.6lf\n", a[i][0],a[i][1],a[i][2],b[i]);
    }

    fprintf(stdout, "x = %.6lf, y = %.6lf, z = %.6lf\n", b[0], b[1], b[2]);

    return 0;
}

void devide(double **mp, int i, int j) {
    double a;
    a = mp[i][j];
    for (int k = j; k < 4; k++) {
        mp[i][k] = mp[i][k] / a;
    }
}

void addition(double **mp, int i, int j, int k) {
    double b;
    b = mp[i][k];
    for (int s = k; s < 4; s++) {
        mp[i][s] = mp[i][s] + (-mp[j][s] * b);
    }
}

void setup_matrix(double **mp, double *b) {
    mp[0][0] = 3; mp[0][1] = 4; mp[0][2] = 8;
    mp[1][0] = 1; mp[1][1] = 7; mp[1][2] = 2;
    mp[2][0] = 2; mp[2][1] = 2; mp[2][2] = 3;
    b[0] = 35; b[1] = 21; b[2] = 15;
} 

void input_matrix(double **MP, double **mp, double *b) {
    MP[0][0] = mp[0][0];MP[0][1] = mp[0][1];MP[0][2] = mp[0][2];MP[0][3] = b[0];
    MP[1][0] = mp[1][0];MP[1][1] = mp[1][1];MP[1][2] = mp[1][2];MP[1][3] = b[1];
    MP[2][0] = mp[2][0];MP[2][1] = mp[2][1];MP[2][2] = mp[2][2];MP[2][3] = b[2];
}

void output_matrix(double **MP, double **mp, double *b){
    mp[0][0] = MP[0][0];mp[0][1] = MP[0][1];mp[0][2] = MP[0][2];b[0] = MP[0][3];
    mp[1][0] = MP[1][0];mp[1][1] = MP[1][1];mp[1][2] = MP[1][2];b[1] = MP[1][3];
    mp[2][0] = MP[2][0];mp[2][1] = MP[2][1];mp[2][2] = MP[2][2];b[2] = MP[2][3];

}

