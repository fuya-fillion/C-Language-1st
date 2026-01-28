#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    int data;
    struct item *next;
} Item;

typedef struct {
    Item *p;
} List;

Item * create_item(int value);
List * create_list(int value);
void push(List *lp, int a);
void insert(List *lp, int a, int b);
void delete(List *lp, int a);
int read(List *lp, int a);
void print_list(List *lp);
void free_list(List *lp);

int main(int argc, char **argv) {
    List *lp = create_list(0);
    print_list(lp);

    push(lp, 1);                                                //末尾に1を追加
    push(lp, 2);                                                //末尾に2を追加
    print_list(lp);                                             //リストを表示

    delete(lp, 1);                                              //1番目の要素を削除
    print_list(lp);                                             //リストを表示

    insert(lp, 3, 1);                                           //1番目に3を挿入
    print_list(lp);                                             //リストを表示

    fprintf(stdout, "read data = %d\n", read(lp, 2));           //2番目の要素を表示

    free_list(lp);                                              //リストを解放
    return EXIT_SUCCESS;
}

Item * create_item(int value) {                                 //valueの値を要素に持つitemを作成
    Item *ip = malloc(sizeof(Item));                            //メモリの確保
    if(ip !=NULL) {                                             //メモリが確保できた場合
        ip->data = value;                                       //ipの要素にvalueの値を代入
        return ip;                                              //ipを返す
    } else {                                                    //メモリを確保できなかった場合
        return NULL;                                            //NULLを返す
    }
}

List * create_list(int value) {                                 //リストの先頭を指すlistと、0番目のitemを作成
    List *lp = malloc(sizeof(List));                            //メモリの確保
    if(lp == NULL) {                                            //メモリが確保できなかった場合
        return NULL;                                            //NULLを返す
    }

    Item *ip = create_item(value);                              //引き値を要素に持つitemを作成
    if(ip == NULL) {                                            //メモリを確保できなかった場合
        free(lp);                                               //listを解放
        return NULL;                                            //NULLを返す
    }
    ip->next = NULL;

    lp->p = ip;                                                 //lpが0番目のitemを指す
    return lp;                                                  //lpを返す
}

void push(List *lp, int a) {                                    //末尾にaを追加
    Item *new_ip = create_item(a);                              //aを要素に持つitemを作成
    if (new_ip == NULL) {
        return;
    }
    new_ip->next = NULL;

    Item *ip = lp->p;                                           //リンクリストを辿る
    while (ip->next != NULL) {
        ip = ip->next;
    }

    ip->next = new_ip;                                          //リストの末尾に追加
}

void insert(List *lp, int a, int b) {                           //b番目にaを挿入
    if (b == 0) {                                               //b=0
        Item *ip = create_item(a);                              //aを要素に持つitemを作成
        Item *insert_ip = lp->p;                                //0番目のitemを指すinsert_ip
        lp->p = ip;                                             //リストの先頭を新しいitemにする
        ip->next = insert_ip;                                   //新しいitemが指すポインタを元の0番目のitemにする
    } else {                                                    //b=0でない
        Item *insert_ip = lp->p;                                //0番目のitemを指すinsert_ip
        int current = 0;
        while (current < b-1) {                                 //挿入したい位置の手前までリストを辿る
            insert_ip = insert_ip->next;
            current++;
        }
        Item *ip = create_item(a);                              //aの要素を持つitemを作成
        ip->next = insert_ip->next;                             //新しいitemが指すポインタを挿入する次のitemにする
        insert_ip->next = ip;                                   //挿入する前のitemが指すポインタを新しいitemにする
    }
}

void delete(List *lp, int a) {                                  //a番目の要素を削除
    if(a == 0) {                                                //a=0
        Item *ip =lp->p;                                        //0番目のitemを指すip
        lp->p = ip->next;                                       //リストの先頭を1番目のitemにする
    } else {
        Item *ip = lp->p;                                       //0番目のitemを指すip
        int current = 0;
        while (ip->next != NULL && current < a-1) {             //削除したいitemの手前までリストを辿る
            ip = ip->next;
            current++;
        }

        Item *next_ip = ip->next;                               //削除したいitemの次のitemを控える
        ip->next = next_ip->next;                               //前のitemが控えたitemを指す
    }
}

int read(List *lp, int a) {                                     //a番目の要素を表示
    Item *read_ip = lp->p;                                      //0番目のitemを指すread_ip
    int current = 0;
    while (read_ip != NULL && current < a) {                    //表示したいitemまでリストを辿る
        read_ip = read_ip->next;
        current++;
    }
    if (read_ip == NULL) {                                      //表示できるitemがなかった場合
        return -1;
    }
    return read_ip->data;                                       //要素を返す
}

void print_list(List *lp) {                                     //リストを表示
    Item *print_ip = lp->p;                                     //0番目のitemを指すprint_ip
    while (print_ip != NULL) {                                  //末尾までリストを辿る
        fprintf(stdout, "%d -> ", print_ip->data);
        print_ip = print_ip->next;
    }
    fprintf(stdout, "NULL\n");                                  //末尾をNULLで締める
}

void free_list(List *lp) {                                      //リストを解放する
    Item *current = lp->p;                                      //0番目のitemを指すcurrent
    Item *next_ip;                                              //次のitemを控えるnext_ip
    while (current!= NULL) {                                    //末尾までリストを辿る
        next_ip = current->next;                                //currentの次のitemを控える
        free(current);                                          //currentのitemを解放
        current = next_ip;                                      //currentを控えたitemにする
    }
    free(lp);                                                   //0番目を指すlistを解放する
}