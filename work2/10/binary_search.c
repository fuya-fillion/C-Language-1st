#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10                                                    //Nを定義

void setup(int *mp);

void sort(int *mp, int left, int right);

void swap(int *i, int *j);

int binarySearch(int *mp, int m, int left, int right);

int main(int argc, char **argv) {
    int x, result;
    int a[N];

    srand ((unsigned)time(NULL));

    setup(a);                                                   //要素数がNの配列を設定
    sort(a, 0, N-1);                                            //配列を昇順に並べ替える

    if (fscanf(stdin, "%d", &x)!=1) {                           //見つける数字を読み込む(\nなし)
        fprintf(stderr, "入力エラー\n");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "以下の数字の中から%dを探します…\n", x);
    for (int j = 0; j < N; j++) {                               //配列を表示
        fprintf(stdout, "[%2d]%3d\n", j, a[j]);
    }

    result = binarySearch (a, x, 0, N-1);                       //二分法の結果を得る

    if (result != -1) {                                         //配列に目的の数字がなかった場合
        fprintf(stdout, "%d番目に見つかりました！\n", result);
    } else {                                                    //配列に目的の数字が見つかった場合
        fprintf(stdout, "見つかりませんでした…\n");
    }

    return EXIT_SUCCESS;

}

void setup(int *mp) {                                           //配列を要素の取りうる値を0から19になるようにランダムに設定
    srand((unsigned)time(NULL));
    for (int i = 0; i < N; i++) {
        mp[i] = rand()%20;
    }
}

void sort(int *mp, int left, int right) {                       //クイックソート
    if (left >= right) return;                                  //並べ替える配列の要素数が1以下の時終了

    int i = left, j = right;
    int pivot = mp[(left + right)/2];                           //ピボットを真ん中の数字に設定

    while (mp[i] < pivot) i++;                                  //ピボットの左側の要素がピボットより小さいことを左から確かめる
    while (mp[j] > pivot) j--;                                  //ピボットの右側の要素がピボットより大きいことを右から確かめる

    if (i <= j) {
        swap(&mp[i], &mp[j]);                                   //ピボットり大きく左側にある要素と小さく右側にある要素を入れ替える
        i++; j--;
    }

    sort(mp, left, j);                                          //ピボットより大きいことが確定した要素の左側にある要素でクイックソートを行う
    sort(mp, i, right);                                         //ピボットより小さいことが確定した要素の右側にある要素でクイックソートを行う
}

void swap(int *i, int *j) {
    int k;
    k = *i; *i = *j; *j = k;
}

int binarySearch(int *mp, int m, int left, int right){          //二分法
    int mid;
    if (left > right) {                                         //調べる要素がない時終了
        return -1;
    }
    mid = (left + right)/2;                                     //二分する場所を真ん中の要素に設定する
    if (mp[mid] == m) {                                         //真ん中の数字が目的の数字であった場合
        return mid;                                             //真ん中の数字を返す
    } else if (mp[mid] < m) {                                   //真ん中の数字が目的の数字より小さかった場合
        return binarySearch(mp, m, mid + 1, right);             //真ん中より右側の配列で二分法を行う
    } else {                                                    //真ん中の数字が目的の数字より大きかった場合
        return binarySearch(mp, m, left, mid - 1);              //真ん中より左側の配列で二分法を行う
    }
}