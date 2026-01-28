#include <stdio.h>
int main(void) {
    int Scores[3],Sum=0, i;
    for(i=0;i<3;i++){
        printf("Input score %d:",i);
        scanf("%d",&Scores[i]);
    }
    for(i=0;i<3;i++){
        Sum += Scores[i];
    }
    printf("Total is %d.\n",Sum);
    return 0;
}