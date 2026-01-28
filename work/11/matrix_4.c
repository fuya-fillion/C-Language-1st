#include <stdio.h>
#define ROWS 2
#define COLS 3

int main(void) {
    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int vectorb[ROWS], i, j;

   // Enter elements into vectorb
   printf("Enter %d elements for vectorb:\n", ROWS);
    for (i = 0; i < ROWS; i++) {
            printf("    Element [%d]: ", i);
            scanf("%d", &vectorb[i]);
    }

    // Display matrixA
    printf("\nmatrixA:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%4d", matrixA[i][j]);
        }
        printf("\n");
    }

    // Display vectorb
    printf("\nvectorb:\n");
    for (i = 0; i < ROWS; i++) {
        printf("%4d\n", vectorb[i]);
    }

    // Display augmented matrix [matrixA | vectorb]
    printf("\nAugmented matrix [A | b]:\n");
    for (i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("%4d", matrixA[i][j]);
        }
        printf(" | %4d\n", vectorb[i]);
    }

    return 0;
}