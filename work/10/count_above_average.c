#include <stdio.h>
#define NUM_STUDENTS 5

int main(void) {
    int scores[NUM_STUDENTS], i;
    int sum = 0;    // Scores the total score of all students
    int count = 0;    // Counts students scoring above the average
    double average;

    // Enter each student's score and store it in the arrray
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the score of student %d: ", i + 1);
        scanf("%d", &scores[i + 1]);
    }

    // Calculate sum and average
    for (i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i + 1];
    }
    average = sum / (double)NUM_STUDENTS;

    // Count how many scores are above average
    for (i = 0; i < NUM_STUDENTS; i++) {
        if (scores[i + 1] > average) {
            count ++;
        }
    }

    // Output results
    printf("\n--- Result ---\n");
    printf("Average: %.1f\n", average);
    printf("Count of numbers above average: %d\n", count);

    return 0;
}