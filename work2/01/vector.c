#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a[3], b[3], c[3], i;

    srand((unsigned)time(NULL));                    //乱数を現在時刻で初期化

    for (i = 0; i < 3; i++) {                       //０から２まで繰り返す
    a[i] = rand() / (RAND_MAX + 1.0)*10;            //a[i]を0から9のランダムな整数にする
    b[i] = rand() / (RAND_MAX + 1.0)*10;            //b[i]を0から9のランダムな整数にする
    }

    for (i = 0; i < 3; i++) {
        c[i] = a[i] + b[i];                         //c[i]を計算する
    }

    for (i = 0; i < 3; i++) {
        fprintf(stdout, "a[%d] = %d, b[%d] = %d, c[%d] = %d\n", i, a[i], i, b[i], i, c[i]);
    }

    return EXIT_SUCCESS;
}