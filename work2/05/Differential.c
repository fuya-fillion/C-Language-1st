#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func1(double);
double func2(double);
double derivative(double,double(*)(double));

int main(int argc, char **argv) {
    double (*pfunc)(double);
    double a = 0.0;

    for (int i = 0; i < 2; i++) {                               //iを0から1まで繰り返す
        if (i%2 == 0) {                                         //iが2で割ってあまりが0の時
            pfunc = func1;                                      //pfuncはfunc1=sin(x)
        } else {                                                //iが2で割ってあまりが0でない時
            pfunc = func2;                                      //pfuncはfunc2=x^3
        }
        while (a <= 1.0) {                                      //aが1以下の時に繰り返す
        fprintf(stdout ,"%lf\t%lf\n", a, derivative(a, pfunc)); //aの値とその時のここでの導関数を表示する
        a += 0.001;                                             //aに0.001を足す
        }
        a = 0.0;                                                //aの値を0.0に初期化する
    }

    return EXIT_SUCCESS;
}

double func1 (double x) {                                       //func1を定義する
    return sin(x);
}

double func2 (double x) {                                       //func2を定義する
    return x*x*x;
}

double derivative(double x,double(*pfunc)(double)) {            //ここでの導関数を定義する
    double h = 0.00001;
    return (pfunc(x + h) - pfunc(x)) / h;
}