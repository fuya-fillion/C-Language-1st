#include <stdio.h>
#define SIZE 3

int main(void) {
    int Scores[SIZE],Sum=0, i;
    for(i=0; i<SIZE;i++) {
        printf("Input score %d:",i);
        scanf("%d", &Scores[i]);
    }
    for(i=0; i<SIZE;i++) {
        Sum += Scores[i];
    }
        printf("Total is %d.\n", Sum);
        return 0;
}