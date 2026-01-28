#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numTosses = 20000;      // Total number of coin tosses to simulate
    int toss;                   // Result of a single toss: 0 (heads) or 1 (tails)
    int heads = 0, tails = 0;   // Counters for heads and tails
    int i;

    // Initialize random number generator
    srand((unsigned) time(NULL));

    // Perform coin tosses
    for (i = 0; i < numTosses; i ++) {
        // Generate enter 0 (heads) or 1 (tails)
        toss = (int)(rand() / (RAND_MAX + 1.0) * 2);

        if (toss == 0) {
            heads++;    // Count as heads
        } else {
            tails++;    // Count as tails
        }
    }

    // Display the results
    printf("Total Heads: %d\n", heads);
    printf("Total Tails: %5d\n", tails);

    return 0;
}