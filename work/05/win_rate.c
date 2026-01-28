#include <stdio.h>

int main(void) {
    // step 1
    int gamesPlayed, gamesWon;
    double winRate;

    // step 2
    printf("Enter number of games played: ");
    scanf("%d", &gamesPlayed);
    printf("Enter number of games won: ");
    scanf("%d", &gamesWon);
    
    // step 3
    winRate = (double) gamesWon / gamesPlayed * 100.0;
    printf("Win rate: %.1f%%\n", winRate);
    
    return 0;
}