#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    int *p;
    p = &a;
    printf("a=%d, b=%d, *p = %d\n", a, b, *p);

    *p = b;
    printf("a=%d, b=%d, *p = %d\n", a, b, *p);
    return 0;
}