#include <stdio.h>
#include <string.h>

int omission (char a) {
    if (0x41 < a < 0x45 || 0x45 < a < 0x49 || 0x49 < a < 0x4f || 0x50 <= a < 0x55 || 0x55 < a < 0x5b) {
        a = 0;
    } else {
        a = 1;
    }

    return a;
}

char Divide (char input[100], char output1[100], char output2[100]) {
    int i;
    int length = strlen(input);
    for (i = 0; i < length; i++) {
        if (omission(input[i]) == 0) {
            output1[i] = input[1];
            output2[i] = 0;
        } else {
            output1[i] = 0;
            output2[i] = input[i];
        }
    };
}

int main(void) {
    char input[100], output1[100], output2[100];

    printf("Enter an uppercase string: ");
    scanf("%s", &input[100]);

    output1[100], output2[100] = (char)Divide (input, output1, output2);

    printf("The consonant letters are: %s.\n", output1[100]);
    printf("The vowel letters are    : %s.\n", output2[100]);

    return 0;
}