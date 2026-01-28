#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int sp;
    int *s;
    int STACK_LENGTH;
}STACK;

void init_stack(STACK *a, int size);

void free_stack(STACK *a);

int push(int d, STACK *a);

int pop(STACK *a);

void print_stack(STACK *a);

int get_remaining_capacity(STACK *a);

int main(int argc, char **argv) {
    STACK a;
    init_stack(&a, 10);
    push(100, &a);
    print_stack(&a);
    fprintf(stdout, "スタックの空き容量は%dです\n", get_remaining_capacity(&a));
    push(200, &a);
    print_stack(&a);
    fprintf(stdout, "スタックの空き容量は%dです\n", get_remaining_capacity(&a));
    push(300, &a);
    print_stack(&a);
    fprintf(stdout, "スタックの空き容量は%dです\n", get_remaining_capacity(&a));
    fprintf(stdout, "%dを取り出しました\n", pop(&a));
    print_stack(&a);
    fprintf(stdout, "スタックの空き容量は%dです\n", get_remaining_capacity(&a));
    fprintf(stdout, "%dを取り出しました\n", pop(&a));
    print_stack(&a);
    fprintf(stdout, "スタックの空き容量は%dです\n", get_remaining_capacity(&a));
    push(400, &a);
    print_stack(&a);
    fprintf(stdout, "スタックの空き容量は%dです\n", get_remaining_capacity(&a));
    free_stack(&a);
    return EXIT_SUCCESS;
}

void init_stack(STACK *a, int size) {
    a->STACK_LENGTH = size;
    a->s = (int *)malloc(sizeof(int) * size);
    a->sp = 0;
    if (a->s !=NULL) {
        for (int i=0;i<a->STACK_LENGTH;i++) {
            a->s[i] = 0;
        }
    }
    
}

void free_stack(STACK *a) {
    free(a->s);
    a->s = NULL;
}

int push(int d, STACK *a) {
    if (a->sp >= a->STACK_LENGTH) {
        fprintf(stderr, "エラー：スタックが満杯です\n");
        return EXIT_FAILURE;
    } else {
    a->s[a->sp] = d;
    a->sp++;
    return EXIT_SUCCESS;
    }
}

int pop(STACK *a) {
    if (a->sp <= 0) {
        fprintf(stderr, "スタックが空です\n");
        return -1;
    } else {
    a->sp--;
    int value = a->s[a->sp];
    a->s[a->sp] = 0;
    return value;
    }
}

void print_stack(STACK *a) {
    fprintf(stdout, "現在のスタックの中身：");
    for (int i=0;i<a->sp;i++) {
        fprintf(stdout, "%d ", a->s[i]);
    }
    fprintf(stdout, "\n");
}

int get_remaining_capacity(STACK *a) {
    return a->STACK_LENGTH - a->sp;
}