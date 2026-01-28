#include <stdio.h>

int main(void) {
    int n,i;

    //Loop through integer from 2 to 100
    for (n = 2; n <= 100; n++) {

        //Check if n is divisible by any integer from 2 to less then n
        for (i = 2; i <=n; i++) {

            //Divisible → Not prime
            if (n % i == 0) {
                break;
            }
        }

        //If no divisor was found, then n is prime
        if (i == n) {
            printf("%3d\n", n);
        }
    }

    return 0;
}