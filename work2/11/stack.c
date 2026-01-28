#include <stdio.h>
#include <stdlib.h>

#define STACK_LENGTH 10                             //配列の長さを定義

int push(int d);

int pop();

void print_stack();

int s[STACK_LENGTH];
int sp = 0;

int main(int argc, char **argv) {
    push(100);
    print_stack();
    push(200);
    print_stack();
    push(300);
    print_stack();
    fprintf(stdout, "%dを取り出しました\n", pop());
    print_stack();
    fprintf(stdout, "%dを取り出しました\n", pop());
    print_stack();
    push(400);
    print_stack();
    return EXIT_SUCCESS;
}

int push(int d) {                                   //push関数
    if (sp >= STACK_LENGTH) {                       //スタックが満杯になったらエラーを返す
        fprintf(stderr, "エラー：スタックが満杯です\n");
        return -1;
    } else {                                        //スタックが満杯でない場合
    s[sp] = d;                                      //スタックのてっぺんにプッシュする
    sp++;
    return 0;
    }
}

int pop() {                                         //pop関数
    if (sp <= 0) {                                  //スタックが空ならエラーを返す
        fprintf(stderr, "スタックが空です\n");
        return -1;
    } else {                                        //スタックが空でない場合
    sp--;
    int value = s[sp];
    s[sp] = 0;                                      //スタックを空ける
    return value;
    }
}

void print_stack() {
    fprintf(stdout, "現在のスタックの中身：");          //スタックの中身を表示
    for (int i=0;i<sp;i++) {
        fprintf(stdout, "%d ", s[i]);
    }
    fprintf(stdout, "\n");
}