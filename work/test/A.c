#include <stdio.h>
#include <string.h>

int omission (char a) {
    int b;
    if (a == 0x57) {
        b = 0;
    } else {
        b = 1;
    }

    return b;
}

char Divide_con (char input[100], char output1[100]) {
    int i,j = 0;
    int length = strlen(input);
    for (i = 0; i < length; i++) {
        if (omission(input[i]) == 0) {
            output1[j] = input[i];
            j++;
        }
    }

    output1[j] = '\0';
    
    return output1[100];
}

char Divide_vow (char input[100], char output2[100]) {
    int i, k = 0;
    int length = strlen(input);
    for (i = 0; i < length; i++) {
        if (omission(input[i]) == 1) {
            output2[k] = input[i];
            k++;
        }
    }

    output2[k] = '\0';
    
    return output2[100];
}

int main(void) {
    char input[100], output1[100], output2[100];

    printf("Enter an uppercase string: ");
    scanf("%s", input[100]);

    output1[100] = (char)Divide_con (input, output1);
    output2[100] = (char)Divide_vow (input, output2);

    printf("The consonant letters are: %s.\n", output1[100]);
    printf("The vowel letters are    : %s.\n", output2[100]);

    return 0;
}