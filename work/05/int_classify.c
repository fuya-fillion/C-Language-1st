#include <stdio.h>

int main(void) {
    int n;

    //Enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {           //Zero
        printf("Zero.\n");
    } else if (n < 0) {     //Negative
        printf("Negative number.\n");
    } else {
        //Positive: even or odd
        if (n % 2 == 0) {
            printf("Positive even number.\n");
        } else {
            printf("Positive odd number.\n");
        }
    }

    return 0;
}