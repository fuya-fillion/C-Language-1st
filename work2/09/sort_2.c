#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

void setup(int *mp);

void sort(int left, int right, int *a);

void swap(int *i, int *j);

int main(int argc, char **argv) {
    int a[100];

    setup(a);                               //配列の設定

    for (int i = 0; i < N; i++) {           //初期状態の表示
        fprintf(stdout, "%d ", a[i]);
    }
    fprintf(stdout, "\n");

    sort(0, N-1, a);                        //クイックソートを実行

    for (int i = 0; i < N; i++) {           //並べ替えた配列を表示
        fprintf(stdout, "%d ", a[i]);
    }
    fprintf(stdout, "\n");

    return EXIT_SUCCESS;
}

void setup(int *mp) {
    mp[0]=41; mp[1]=65; mp[2]=31; mp[3]=41; mp[4]=19; mp[5]=15; mp[6]=72; mp[7]=11; mp[8]=78; mp[9]=69; mp[10]=37; mp[11]=23; mp[12]=29; mp[13]=63; mp[14]=75; mp[15]=4; mp[16]=5; mp[17]=49; mp[18]=75; mp[19]=99;
}

void sort(int left, int right, int *a) {
    int p, i, j, pivot;
    if (left >= right) return;              //並べ替える配列が1つであれば終了
    p = (left + right)/2;
    pivot = a[p];                           //配列の真ん中の値をピボットとする
    i = left; j = right;
    while (a[i] < pivot) i++;               //ピボットより左側にあって大きい値を探す
    while (a[j] > pivot) j--;               //ピボットより右側にあって小さい値を探す
    if (i <= j) {
        swap(&a[i], &a[j]);                 //見つけた要素を入れ替える
        i++; j--;
    }
    sort(left, j, a);                       //ピボットより大きいことが確定した要素の左側の配列に対して再帰
    sort(i, right, a);                      //ピボットより小さいことが確定した要素の右側の配列に対して再帰
}

void swap(int *i, int *j) {
    int k;
    k = *i; *i = *j; *j = k;
}