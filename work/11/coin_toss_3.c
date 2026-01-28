#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Perform coin tosses and return the ratio of heads (0)
double headsRatio(int numTosses) {
    int toss;       // Result of a single toss: 0 (heads) or 1 (tails)
    int heads = 0;  // Counters for heads and tails
    int i;

    // Perform coin tosses
    for (i = 0; i < numTosses; i++) {
        // Generate either 0 (heads) or 1 (tails)
        toss = (int)(rand() / (RAND_MAX + 1.0) * 2);

        if (toss == 0) heads++; // Count as heads
    }

    // Return the ratio of heads
    return (double)heads /  numTosses;
}

int main(void) {
    int n, tosses;
    double ratio;

    // Initialize random number generator
    srand((unsigned) time(NULL));

    // Print table header
    printf("Tosses\t Heads Ratio\n");

    // Repeat for 10^1 to 10^5 tosses
    for (n = 1; n <= 5; n++) {
        tosses = (int)pow(10,n);        // Number of tosses
        ratio = headsRatio(tosses);     // Simulate tosses and get ratio
        printf("%6d\t %.5f\n", tosses, ratio);
    }

    return 0;
}