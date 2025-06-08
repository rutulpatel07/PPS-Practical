#include <stdio.h>
#include <string.h>

struct Game {
    char playerName[50];
    char teamName[50];
    int maxScore;
};

int main() {
    struct Game Player[3];
    int i, j;

    // Read player data
    for (i = 0; i < 3; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Player Name: ");
        scanf(" %[^\n]", Player[i].playerName);
        printf("Team Name: ");
        scanf(" %[^\n]", Player[i].teamName);
        printf("Maximum Score: ");
        scanf("%d", &Player[i].maxScore);
        printf("\n");
    }

    // Print team-wise player data
    printf("\nTeam-wise Player Details:\n");

    int printed[3] = {0}; // Flag to track printed players

    for (i = 0; i < 3; i++) {
        if (!printed[i]) {
            printf("\nTeam: %s\n", Player[i].teamName);
            printf("Player Name\tMax Score\n");

            for (j = 0; j < 3; j++) {
                if (strcmp(Player[i].teamName, Player[j].teamName) == 0) {
                    printf("%s\t\t%d\n", Player[j].playerName, Player[j].maxScore);
                    printed[j] = 1;
                }
            }
        }
    }

    return 0;
}
