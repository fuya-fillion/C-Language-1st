#include <stdio.h>
#define ROWS 2
#define COLS 3

int main(void) {
    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrixB[ROWS][COLS], i, j;

   // Enter elements into matrixB
   printf("Enter elements of a %d × %d matrixB:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("    Element [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Compute and display matrixA + matrixB
    printf("\nMatrixA + matrixB:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%4d", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }

    // Compute and display transpose of matrixA
    printf("\nTranspose of matrixA:\n");
    for (i = 0; i < COLS; i++) {
        for ( j = 0; j < ROWS; j++) {
            printf("%4d", matrixA[j][i]);
        }
        printf("\n");
    }

    return 0;
}