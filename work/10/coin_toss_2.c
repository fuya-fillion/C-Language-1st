#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numTosses = 20000;      // Total number of coin tosses to simulate
    int toss;                   // Result of a single toss: 0 (heads) or 1 (tails)
    int counts[2] = {0, 0};   // Count[0]: heads, count[1]: tails
    int i;

    // Initialize random number generator
    srand((unsigned) time(NULL));

    // Perform coin tosses
    for (i = 0; i < numTosses; i++) {
        // Generate either 0 (heads) or 1 (tails)
        toss = (int)(rand() / (RAND_MAX + 1.0) * 2);

        // Increase the count for heads (0) or tails (1)
        counts[toss]++;
    }

    // Display the results
    printf("Total Heads: %5d\n", counts[0]);
    printf("Total Tails: %5d\n", counts[1]);

    return 0;
}