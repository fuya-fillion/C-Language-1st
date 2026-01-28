#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(int argc, char **argv) {
    for (int i=0; i < 10; i++) {                            //n=10まで繰り返す
        fprintf(stdout, "[%d]%3d\n", i, fibonacci(i));      //表示する
    }
    return EXIT_SUCCESS;
}

int fibonacci(int n) {                                      //フィボナッチ数列
    if (n==0) {                                             //n=0のとき
        return 1;                                           //1を返す
    } else if (n==1) {                                      //n=1のとき
        return 1;                                           //1を返す
    } else {                                                //n=2以降のとき
        return fibonacci(n-1) + fibonacci(n-2);             //フィボナッチ数列を返す
    }
}