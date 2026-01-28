#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (6*x*x-5*x-4)
#define df(x) (12*x-5)
#define EPS 0.000001


int main(int argc, char **argv){
    int i = 1;
    double x_n = 0, x_m = 0;

    //初期値を得る
    fprintf(stdout, "Input initial value: ");
    scanf("%lf", &x_n);
    fprintf(stdout, "n=0, 初期値=%.7f\n", x_n);

    //ニュートン法を繰り返す
    while (1) {
        //x_mを求める
        x_m= x_n - f(x_n) / df(x_n);
        fprintf(stdout, "n=%d, 暫定値=%.7f\n", i, x_m);
        i++;
        //x_m-x_nが閾値に収まったらニュートン法を打ち切る
        if (-EPS < x_m - x_n && x_m - x_n < EPS) break;
        x_n = x_m;
    }

    return 0;
}