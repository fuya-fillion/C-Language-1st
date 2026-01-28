#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char name[100];     // Variable for the student's name
    int score;          // Variable for the student's score

    // Prompt and read the student's name and score
    printf("Enter the name: ");
    scanf("%s", &name);
    printf("Enter the score: ");
    scanf("%d", &score);

    // Open the file for writing
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error: Cannot open file 'student.txt'.\n");
        exit(1);
    }

    // Write the name and score to the file
    fprintf(file, "Name : %s\n", name);
    fprintf(file, "Score: %d\n", score);

    // Close the file
    fclose(file);

    // Print confirmation
    printf("Student data has been written to 'student.txt'.\n");

    return 0;
}