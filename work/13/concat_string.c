#include <stdio.h>
#include <string.h>

// Function to concatenate two strings and store the result in 'result'
void concatStrings(char *string1, char *string2, char *result) {
    int i;
    int length1 = strlen(string1);  // Length of string 1
    int length2 = strlen(string2);  // Length og string 2

    // Copy string1 to result
    for (i = 0; i < length1; i++) {
        result[i] = string1[i];
    }

    // Copy string2 to result
    for (i = 0; i < length2; i++) {
        result[length1 + i] = string2[i];
    }

    // Add null terminator at the end
    result[length1 + length2] = '\0';
}

int main(void) {
    // Arrays to store string1 and string2
    char string1[100], string2[100];

    // Array to store the concatenated result
    char result[200];

    // Input string1 and string2
    printf("Enter string1 and string2\n");
    printf("string1: ");
    scanf("%s", string1);
    printf("string2: ");
    scanf("%s", string2);

    // Concatenate string1 and string2, store in result
    concatStrings(string1, string2, result);

    // Display the concatenated result
    printf("string1 + string2: %s\n", result);

    return 0;
}