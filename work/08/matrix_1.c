#include <stdio.h>
#define ROWS 2
#define COLS 3

int main(void) {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int i, j;

    printf("Matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}