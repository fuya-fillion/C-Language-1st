#include <stdio.h>

int main(void) {
    int n, i;
    //Fibonacci definition: F0 = 0, F1 = 1, Fn = Fn-1 + Fn-2
    int f_0 = 0, f_1 = 1, f_n, f_prev1, f_prev2;

    //Enter a non-negative integer
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n == 0) {
        //Print only f_0
        printf("%d\n", f_0);
    } else if (n == 1) {
        //Print f_0 and f_1
        printf("%d %d\n", f_0, f_1);
    } else {
        //Print first two terms
        printf("%d %d ", f_0, f_1);

        //Set initial values
        f_prev1 = f_0;
        f_prev2 = f_1;

        for (i = 1; i <= n-1; i++) {
            //Calculate the next term
            f_n = f_prev1 + f_prev2;
            printf("%d ", f_n);

            //Update the previous two terms
            f_prev1 = f_prev2;
            f_prev2 = f_n;
        }
        printf("\n");
    }

    return 0;
}