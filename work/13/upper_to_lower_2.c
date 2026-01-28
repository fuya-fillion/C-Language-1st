#include <stdio.h>
#include <string.h>

// Function to convert an uppercase string to lowercase and display
void printLower(char *upperStr) {
    int i;
    int length = strlen(upperStr);  // Get the length of the input string

    // Convert to lowercase and display
    printf("Converted to lowercase: ");
    for (i = 0; i < length; i++) {
        printf("%c", upperStr[i] + 32);
    }
    printf("\n");
}

int main(void) {
    char inputStr[100];

    // Prompt the user to enter a string and read it
    printf("Enter an uppercase string: ");
    scanf("%s", inputStr);

    // Call function to print lowercase
    printLower(inputStr);

    return 0;
}