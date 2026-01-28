#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int f_l = 1, f_m = 1, f_n = 1;                      //初期値を設定
    fprintf(stdout, "[0]  1\n[1]  1\n");                //n=0,1について記述
    for (int i = 2; i < 10; i++) {                      //n=10まで繰り返す
        f_n = f_m; f_m = f_l;
        f_l = f_m + f_n;                                //フィボナッチ数列を計算する
        fprintf(stdout, "[%d]%3d\n", i, f_l);           //表示する
    }
    return EXIT_SUCCESS;
}