#include <stdio.h>

int write (int x, int y) {
    printf("x: address = %p, value = %d,\nx: address = %p, value = %d", &x, x, &y, y);
}

int swap (int *a, int *b) {
    int c;
    c = *a; *a = *b; *b = c;
}

int order (int *a, int *b) {
    if (*a >= *b) (int)swap(*a, *b);
}

int main(void) {
    int x = 7, y = 3;
    write (x, y);
    order (&x, &y);
    write (x, y);
    return 0;
}