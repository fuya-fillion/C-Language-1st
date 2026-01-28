#include <stdio.h>
#include <stdlib.h>

#define QUEUE_LENGTH 10                             //配列の長さを定義

int enq(int d);                                     //指定した値をエンキューする。失敗したら-1、成功したら0を返す

int deq();                                          //キューから値をひとつ取り出して返す。返すべき値が無ければ-1を返す

void print_queue();                                 //キューの中身を出力する

int q[QUEUE_LENGTH];                                //キューの配列とheadとtail
int head = 0;
int tail = 0;

int main(int argc, char **argv) {
    enq(100);
    print_queue();
    enq(200);
    print_queue();
    enq(300);
    print_queue();
    fprintf(stdout, "%dを取り出しました\n", deq());
    print_queue();
    fprintf(stdout, "%dを取り出しました\n", deq());
    print_queue();
    enq(400);
    print_queue();
    return EXIT_SUCCESS;
}

int enq(int d) {
    if (head > tail) {                              //headがtailを追い越したら-1を返す
        return -1;
    } else {
        q[tail] = d;                                //キューに加える
        tail++;
        return 0;
    }
}

int deq() {
    if (head >= tail) {                             //headがtailに追いついたら-1を返す
        return -1;
    } else {                                        //キューを読み出す
        int value = q[head];
        q[head] = 0;
        head++;
        return value;
    }
    
}

void print_queue() {
    fprintf(stdout, "現在のキューの中身： ");
    for (int i=head;i<tail;i++) {                   //キューをheadからtailまで出力
        fprintf(stdout, "%d ", q[i]);
    }
    fprintf(stdout, "\n");
}