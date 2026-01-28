#include <stdio.h>
#define SIZE 20

int main(void) {
    int Data[SIZE], max, i;
    for(i=0; i<SIZE; i++) {
        Data[i] = (i*83+11)%101;
        printf("%d, ", Data[i]);
    }
    max = Data[0];
    for(i=i; i<SIZE; i++) {
        if(max < Data[i]) max = Data[i];
    }
    printf("\n");
    printf("Highest score is %3d.\n ", max);
    return 0;
}