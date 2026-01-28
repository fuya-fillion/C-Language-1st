#include <stdio.h>
#include <string.h>

struct string{
    char words[100];
    int length;
};

void classify(struct string a, struct string b, struct string c, int *x, int *y, int *z) {
    if (a.length == b.length) {
        *x = 0;
    } else {
        *x = 1;
    }
    if (a.length == c.length) {
        *y = 0;
    } else {
        *y = 1;
    }
    if (b.length == c.length) {
        *z = 0;
    } else {
        *z = 1;
    }
}

int main(void) {
    struct string a, b, c;
    int x, y, z;

    printf("Input three words.\n");
    printf("Words 1: ");
    scanf("%s", a.words);
    printf("Words 2: ");
    scanf("%s", b.words);
    printf("Words 3: ");
    scanf("%s", c.words);

    a.length = strlen(a.words);
    b.length = strlen(b.words);
    c.length = strlen(c.words);

    classify(a, b, c, &x, &y, &z);

    if (x == 0 && y == 0) {
        printf("Number of charactors: %d\n", a.length);
        printf("Words: %s, %s, %s.\n", a.words, b.words, c.words);
    } else if (x == 0 && y == 1) {
        printf("Number of charactors: %d\n", a.length);
        printf("Words: %s, %s.\n", a.words, b.words);
        printf("Number of charactors: %d\n", c.length);
        printf("Words: %s.\n", c.words);
    } else if (x == 1 && y == 0) {
        printf("Number of charactors: %d\n", a.length);
        printf("Words: %s.\n", a.words);
        printf("Number of charactors: %d\n", b.length);
        printf("Words: %s, %s.\n", b.words, c.words);
    } else if (x == 1 && y == 1 && z == 0) {
        printf("Number of charactors: %d\n", a.length);
        printf("Words: %s, %s.\n", a.words, c.words);
        printf("Number of charactors: %d\n", b.length);
        printf("Words: %s.\n", b.words);
    } else if (x == 1 && y == 1 && z == 1) {
        printf("Number of charactors: %d\n", a.length);
        printf("Words: %s.\n", a.words);
        printf("Number of charactors: %d\n", b.length);
        printf("Words: %s.\n", b.words);
        printf("Number of charactors: %d\n", c.length);
        printf("Words: %s.\n", c.words);
    }

    return 0;
}