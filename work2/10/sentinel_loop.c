#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10                                                //Nを定義

void setup(int *mp, int n);

int main(int argc, char **argv) {
    int i = 0, x;
    int a[N];

    setup(a, N);                                            //要素数がN+1の配列を設定

    if (fscanf(stdin, "%d", &x) != 1) {                     //見つける数字を読み込む(\nなし)
        fprintf(stderr, "入力エラー\n");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "以下の数字の中から%dを探します…\n", x);
    for (int j = 0; j < N; j++) {                           //配列を表示
        fprintf(stdout, "[%2d]:%3d\n", j, a[j]);
    }
    a[N] = x;                                               //配列の末尾に目的の数字を追加する

    while (a[i]!=x) {                                       //目的の数字が見つかるまでiを増加させる
        i++;
    }
    
    if (i == N) {                                           //配列に目的の数字がなかった場合
        fprintf(stdout, "見つかりませんでした…\n");
    } else {                                                //配列に目的の数字が見つかった場合
        fprintf(stdout, "%d番目に見つかりました！\n", i);
    }

    return EXIT_SUCCESS;
}

void setup(int *mp, int n) {                                //配列を要素の取りうる値が0から19になるようにランダムに設定する
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        mp[i] = rand()%20;
    }
}