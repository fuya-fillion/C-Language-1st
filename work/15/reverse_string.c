#include <stdio.h>
#include <string.h>

// Function to reverse a string into another array
void reverse_string (char input[100], char output[100]) {
    int i;
    int length = strlen(input);         // Get the length of the input string
    for (i = 0; i < length; i++) {
        output[i] = input[length - i - 1];  // Copy characters in reverse order
    }
    output[length] = '\0';    // Add null terminator
}

int main(void) {
    char input[100];        // Array to store the original string
    char output[100];       // Array to store the reversed string

    // Read input string
    printf("Enter a string to reverse: ");
    scanf("%s", input);

    // Reverse the string
    reverse_string(input, output);

    // Output the result
    printf("The reversed string is: %s\n", output);
    return 0;
}