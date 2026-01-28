#include <stdio.h>
int main(void) {
    int a=10, b=4;
    double c, d;
    c = a/b;
    d = (double) a/b;
    printf("a/b=%d, c=%f, d=%f\n", a/b, c, d);
    return 0;
}