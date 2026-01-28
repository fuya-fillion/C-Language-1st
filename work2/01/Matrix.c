#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a[2][2],b[2][2],c[2][2], i, j;

    srand((unsigned)time(NULL));                        //乱数を現在時刻で初期化

    for (i = 0; i < 2; i++) {                           //iを0から1まで繰り返す
        for (j = 0; j < 2; j++){                        //jを0から1まで繰り返す
            a[i][j] = rand() / (RAND_MAX + 1.0)*10;     //a[i][j]を0から9のランダムな整数にする
            b[i][j] = rand() / (RAND_MAX + 1.0)*10;     //b[i][j]を0から9のランダムな整数にする
        }
    }

    for (i = 0; i < 2; i++) {                           //iを0から1まで繰り返す
        for (j = 0; j < 2; j++){                        //jを0から1まで繰り返す
            c[i][j] = a[i][j] + b[i][j];                //c[i][j]を計算する
            }
    }

    fprintf(stdout, "a[0][0] = %d a[0][1] = %d\na[1][0] = %d a[1][1] = %d\n\n",a[0][0],a[0][1],a[1][0],a[1][1]);
    fprintf(stdout, "b[0][0] = %d b[0][1] = %d\nb[1][0] = %d b[1][1] = %d\n\n",b[0][0],b[0][1],b[1][0],b[1][1]);
    fprintf(stdout, "c[0][0] = %d c[0][1] = %d\nc[1][0] = %d c[1][1] = %d\n",c[0][0],c[0][1],c[1][0],c[1][1]);

    return EXIT_SUCCESS;
}