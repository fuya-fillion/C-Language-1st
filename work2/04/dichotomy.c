#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (6*x*x-5*x-4)
#define df(x) (12*x-5)
#define EPS 0.000001

int main(int argc, char **argv) {
    int i = 1;
    double x1, x2, x_m;

    //x1、x2を得る
    fprintf(stdout, "Input x1: ");
    scanf("%lf", &x1);
    fprintf(stdout, "Input x2: ");
    scanf("%lf", &x2);

    //x_mを求める
    x_m = (x1 + x2) /2;

    fprintf(stdout, "n=0, x1=%.7f x2=%.7f, 初期解=%.7f\n", x1, x2, x_m);

    //f(x_m)の値に応じてx1、x2に代入する
    if (f(x1) * f(x_m) > 0) {
        x1 = x_m;
    } else {
        x2 = x_m;
    }

    //二分法を繰り返す
    while(1) {
        //x_mを求める
        x_m = (x1 + x2) /2;
        fprintf(stdout, "n=%d, x1=%.7f x2=%.7f, 暫定解=%.7f\n", i, x1, x2, x_m);
        //f(x_m)の値に応じてx1、x2に代入する
        if (f(x1) * f(x_m) > 0) {
            x1 = x_m;
        } else {
            x2 = x_m;
        }
        i++;
        //x1-x2が閾値に収まったら二分法を打ち切る
        if (-EPS < x1 - x2 && x1 - x2 < EPS) break;
    }

    return 0;
}