#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "This is a sample string.";
    char *token;
    char *delim = " "; // スペースで区切る

    // strtok を使って文字列を分割
    token = strtok(str, delim);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}