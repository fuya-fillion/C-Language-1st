#include <stdio.h>

void swap (int *a, int *b) {
    int c;
    c = *a; *a = *b; *b = c;
}

int main(void) {
    int x = 3, y = 7;
    printf("%d, %d\n", x, y);
    swap (&x, &y);
    printf("%d, %d\n", x, y);
    return 0;
}