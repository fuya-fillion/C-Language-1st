#include <stdio.h>

int main(void) {
    int Data[3];
    Data[0]=10;
    Data[1]=Data[0]*2;
    Data[2]=Data[1]+3;
    printf("Data=%d, %d.\n",Data[0],Data[2]);
    return 0;
}