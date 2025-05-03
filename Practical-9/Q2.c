/*Write a structure called Game that will describe the following information:
[a] player name
[b] team name
[c] maximum score
Using Game, declare an array Player with 3 elements and write a program to
read the information about all the 3 players and print a team-wise containing
names of players with their maximum scores.*/

#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 3
#define MAX_NAME_LENGTH 50
#define MAX_TEAM_LENGTH 50

// Define structure for Game
struct Game {
    char playerName[MAX_NAME_LENGTH];
    char teamName[MAX_TEAM_LENGTH];
    int maxScore;
};

int main() {
    struct Game players[MAX_PLAYERS];
    char teams[MAX_PLAYERS][MAX_TEAM_LENGTH];
    int teamCount = 0;

    // Input player details
    printf("Enter details of %d players:\n", MAX_PLAYERS);
    for (int i = 0; i < MAX_PLAYERS; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf(" %[^\n]", players[i].playerName);
        printf("Enter team name: ");
        scanf(" %[^\n]", players[i].teamName);
        printf("Enter maximum score: ");
        scanf("%d", &players[i].maxScore);

        // Check if team is already recorded
        int found = 0;
        for (int j = 0; j < teamCount; j++) {
            if (strcmp(teams[j], players[i].teamName) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(teams[teamCount], players[i].teamName);
            teamCount++;
        }
    }

    // Print team-wise player details
    printf("\nTeam-wise player details:\n");
    for (int i = 0; i < teamCount; i++) {
        printf("\nTeam: %s\n", teams[i]);
        for (int j = 0; j < MAX_PLAYERS; j++) {
            if (strcmp(teams[i], players[j].teamName) == 0) {
                printf("Player: %s, Maximum Score: %d\n", players[j].playerName, players[j].maxScore);
            }
        }
    }

    return 0;
}

