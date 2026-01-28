#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setup(int *mp);

void swap(int *a,int *b);

int main(int argc, char **argv) {
    int t=0;
    int a[100];

    setup(a);                                               //配列の設定
    for (int i=0; i<20; i++) {                              //初期状態の表示
        fprintf(stdout, "%d ", a[i]);
    }
    fprintf(stdout, "\n");
    while (1) {                                             //t=0から19まで一連の要素の比較を繰り返す
        if (t == 20) {                                      //t=20となったら終わりにする
            break;
        } else if (t < 20) {                                //t=0から19までのとき
            for (int j=0; j<19; j++) {                      //j=0から19まで繰り返す
                if (a[j] > a[j+1]) swap(&a[j], &a[j+1]);    //a[j]がa[j+1]より大きかったらa[j]とa[j+1]を入れ替える
            }
        }
        t++;
    }
    for (int k=0; k<20; k++) {                              //並べ替えた配列を表示
        fprintf(stdout, "%d ", a[k]);
    }
    fprintf(stdout, "\n");

    return EXIT_SUCCESS;
}

void setup(int *mp) {
    mp[0]=41; mp[1]=65; mp[2]=31; mp[3]=41; mp[4]=19; mp[5]=15; mp[6]=72; mp[7]=11; mp[8]=78; mp[9]=69; mp[10]=37; mp[11]=23; mp[12]=29; mp[13]=63; mp[14]=75; mp[15]=4; mp[16]=5; mp[17]=49; mp[18]=75; mp[19]=99;
}

void swap(int *a,int *b) {
    int c;
    c=*a; *a=*b; *b=c;
}