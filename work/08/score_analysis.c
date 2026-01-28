#include <stdio.h>
#define NUM_STUDENTS 5

int main(void) {
    int scores[NUM_STUDENTS], i, max, min;

    // Enter each syudent's score and store it in the array
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the score of student %d: ", i);
        scanf("%d", &scores[i]);
    }

    // Initialize max and min
    max = scores[0];
    min = scores[0];

    // Calculate max and min
    for (i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    // Output results
    printf("\n--- Result ---\n");
    printf("Highest score: %3d\n", max);
    printf("Lowest score : %3d\n", min);

    // Pass/Fail judgment based on 80-point threshold
    for (i =0; i < NUM_STUDENTS; i++) {
        if (scores[i] >= 80) {
            printf("Student %d: %3d => Pass\n", i, scores[i]);
        } else {
            printf("Student %d: %3d => Fail\n", i, scores[i]);
        }
    }

    return 0;
}