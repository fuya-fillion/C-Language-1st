#include <stdio.h>
#include <stdlib.h>

#define QUEUE_LENGTH 5                              //配列の長さを定義

int enq(int d);                                     //指定した値をエンキューする。失敗したら-1、成功したら0を返す

int deq();                                          //キューから値をひとつ取り出して返す。返すべき値が無ければ-1を返す

void print_queue();                                 //キューの中身を出力する

int q[QUEUE_LENGTH];                                //キューの配列とheadとtailとcount
int head = 0;
int tail = 0;
int count = 0;

int main(int argc, char **argv) {
    enq(100);
    print_queue();
    enq(200);
    print_queue();
    enq(300);
    print_queue();
    enq(400);
    print_queue();
    fprintf(stdout, "%dを取り出しました\n", deq());
    print_queue();
    fprintf(stdout, "%dを取り出しました\n", deq());
    print_queue();
    enq(500);
    print_queue();
    enq(600);
    print_queue();
    fprintf(stdout, "%dを取り出しました\n", deq());
    print_queue();
    return EXIT_SUCCESS;
}

int enq(int d) {
    if (tail == head && count == 1) {           //tailがheadにキューを一周して追いついたら-1を返す
        return -1;
    } else {
        q[tail] = d;                            //キューに加える
        if (tail == QUEUE_LENGTH-1) {           //キューの端に着いたらtailを0にする
            tail = 0;
            count++;
        } else {
            tail++;
        }
        return 0;
    }
}

int deq() {
    if (head == tail && count == 1) {           //tailがheadに追いついたら-1を返す
        return -1;
    } else {
        int value = q[head];                    //キューを読み出す
        q[head] = 0;
        if (head == QUEUE_LENGTH-1) {           //キューの端に着いたらheadを0にする
            head = 0;
            count--;
        } else {
            head++;
        }
        return value;
    }
    
}

void print_queue() {
    fprintf(stdout, "現在のキューの中身： ");
    if (count == 0) {                           //tailがheadより大きい時
        for (int i=head;i<tail;i++) {
            fprintf(stdout, "%d ", q[i]);
        }
    } else {                                    //tailがheadより小さい時
        for (int i=head;i<QUEUE_LENGTH;i++) {
            fprintf(stdout, "%d ", q[i]);
        }
        for (int i=0;i<tail;i++) {
            fprintf(stdout, "%d ", q[i]);
        }
    }
    fprintf(stdout, "\n");
}