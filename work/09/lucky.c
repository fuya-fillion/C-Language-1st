#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    double a;
    srand ((unsigned)time(NULL)/(60*60*24));
    a = (rand()/(RAND_MAX+1.0));
    if (a < 0.3) {
        printf("Very lucky\n");
    } else if (a < 0.9) {
        printf("lucky\n");
    } else {
        printf("Not lucky\n");
    }

    return 0;
}