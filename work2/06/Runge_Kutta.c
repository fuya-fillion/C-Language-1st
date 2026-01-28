#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    double t = 0.0, h;

    double x[100];                                                                  //配列xを設定

    x[0]= 1;                                                                        //xの初期値を設定
    h= 0.1;                                                                         //hを設定
    fprintf(stdout, "t= 0.0, x=    1.00, 正解=    1.00\n");                         //t=0.0について出力
    for (int i= 0; i < 10/h; i++) {                                                 //ルンゲクッタ法をくり返す
        t+= h;
        x[i+1]= x[i] + (6*h*x[i] + 3*h*h*x[i] + h*h*h*x[i] + h*h*h*h*x[i]/4)/6;     //ルンゲクッタ法
        fprintf(stdout, "t=%4.1f, x=%8.2f, 正解=%8.2f\n", t, x[i+1], exp(t));       //t=0.0+ihについて出力
    }

    return EXIT_SUCCESS;
}