#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char name[100];     // Variable for the student's name
    int score;          // Variable for the student's score
    int scannum;        // Variable for checking fscanf results

    // Open the file for reading
    FILE *file = fopen("student.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Cannot open file 'student.txt'.\n");
        exit(1);
    }

    // Read the name from the file
    scannum = fscanf(file, "Name : %s\n", &name);
    if (scannum != 1) {
        fprintf(stderr, "Error: Cannot read name from file.\n");
        exit(1);
    }

    // Read the score from the file
    scannum = fscanf(file, "Score: %d\n", &score);
    if (scannum != 1) {
        fprintf(stderr, "Error: Cannot read score from file.\n");
        exit(1);
    }

    // Close the file
    fclose(file);

    // Print the loaded information
    printf("Student information loaded from file:\n");
    printf("Name : %s\n", name);
    printf("Score: %d\n", score);

    return 0;
}