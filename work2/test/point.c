#include <stdio.h>
#include <stdlib.h>

struct point {                                                          //得点の構造体
    int english;
    int math;
    int physics;
    int chemical;
    double average;
};

int main(int argc, char **argv) {
    struct point a;
    fprintf(stdout, "英語の得点を入れてください: ");
    fscanf(stdin, "%d", &a.english);                                    //英語の得点
    fprintf(stdout, "数学の得点を入れてください: ");
    fscanf(stdin, "%d", &a.math);                                       //数学の得点入力
    fprintf(stdout, "物理の得点を入れてください: ");
    fscanf(stdin, "%d", &a.physics);                                    //物理の得点入力
    fprintf(stdout, "化学の得点を入れてください: ");
    fscanf(stdin, "%d", &a.chemical);                                   //科学の得点入力

    a.average = (a.english + a.math + a.physics + a.chemical)/4.0;      //平均点の計算

    fprintf(stdout, "4科目の平均点は%.1f点です!\n", a.average);             //結果の出力
    return EXIT_SUCCESS;
}