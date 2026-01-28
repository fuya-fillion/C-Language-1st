#include <stdio.h>

int main(void) {
    //Declare variables
    int math, eng, total;
    double average;

    //Enter scores
    printf("Enter your scores:\n");
    printf("    Math   : ");
    scanf("%d", &math);
    printf("    English: ");
    scanf("%d", &eng);

    //Calculate and display total and average
    total = math + eng;
    average = (double)total / 2;
    printf("Total score: %d, Average score: %.1f\n", total, average);

    //Determine and display grade
    if (average >= 80 ) {
        printf("Your grade is A.\n");
    } else if (average >= 60 ) {
        printf("Your grade is B.\n");
    } else {
        printf("Your grade is F.\n");
    }

    return 0;
}