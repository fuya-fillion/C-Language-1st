#include <stdio.h>
#include <stdlib.h>

int powering(int n);                                        //2の累乗の関数

int main(int argc, char **argv) {
    int n, i = 0;
    fprintf(stdout, "n = ");
    fscanf(stdin, "%d", &n);                                //計算するnの読み込み
    fprintf(stdout, "2^%2.d = %d\n", n, powering(n));       //計算結果の出力
    return EXIT_SUCCESS;
}
int powering(int n) {                                       //2^n
    if (n == 0) {                                           //終了
        return 1;
    } else {                                                //2をかける
        return 2 * powering(n-1);
    }
}