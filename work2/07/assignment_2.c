#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 0.000001

double f(double);
double derivative(double,double(*)(double));

int main(int argc, char **argv) {
    double (*pfunc)(double), df;
    int i = 1;
    double x_n = 0, x_m = 0;

    //初期値を得る
    fprintf(stdout, "Input initial value: ");
    scanf("%lf", &x_n);
    fprintf(stdout, "n=0, 初期値=%.7f\n", x_n);

    pfunc = f;

    //ニュートン法を繰り返す
    while (1) {
        //x_mを求める
        df = derivative(x_n, pfunc);                            //x=x_nにおける導関数dfを求める
        x_m = x_n - f(x_n) / df;                                //x_mを求める
        fprintf(stdout, "n=%d, 暫定値=%.7f\n", i, x_m);
        i++;
        //x_m-x_nが閾値に収まったらニュートン法を打ち切る
        if (-EPS < x_m - x_n && x_m - x_n < EPS) break;
        x_n = x_m;
    }

    return EXIT_SUCCESS;
}

double f(double x) {                                            //関数fを設定する
    return 6*x*x-5*x-4;
}

double derivative(double x,double(*pfunc)(double)) {            //ここでの導関数を定義する
    double h = 0.00001;
    return (pfunc(x + h) - pfunc(x)) / h;
}