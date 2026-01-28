#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int input;
    static const int CARD_NUM = 10;                                                 //CARD_NUMを10として用いる
    int ans[10] = {1, 4, 2, 5, 6, 7, 8, 3, 2, 0};                                   //答えの一次配列を設定

    while(1) {
        fprintf(stdout,"何番目の数字が7だと思いますか？ [0-%d]: ", CARD_NUM-1);
        fscanf(stdin, "%d", &input);

        if (ans[input] == 7) {                                                      //入力した順番が正解だった時
            fprintf(stdout, "正解！\n");
            for (int i = 0; i < 10; i++) {
                fprintf(stdout, "%d ", ans[i]);                                     //答えの一次配列を表示する
            }
            fprintf(stdout, "\n");                                                  //改行する
            break;                                                                  //正解したら数当てゲームを終了する
        } else {                                                                    //入力した順番が間違いだった時
            fprintf(stdout, "残念！\n");
        }
    }

    return EXIT_SUCCESS;
}
