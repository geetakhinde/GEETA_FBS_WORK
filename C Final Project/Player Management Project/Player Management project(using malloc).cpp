#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct 
{
    int jersey_number;
    char name[20];
    int runs;
    int wickets;
    int matches_played;
} Player;

void addPlayer(Player players[], int *count, int n);
void removePlayer(Player players[], int *count);
void searchPlayer(Player players[], int count);
void updatePlayer(Player players[], int count);
void displayAllPlayers(Player players[], int count);
void displaySortedPlayers(Player players[], int count);

int main()
{
	int n,choice,count=0;
	printf("Enter number of players:");
	scanf("%d",&n);
	
	Player *players=(Player*)malloc(n*sizeof(Player));
	
	if(players==0)
	{
		printf("Memory allocation failed:");
		return 1;
	}

	while (1)
	{
		
        printf("\n------Player Management System------\n");
        printf("1. Add Player\n");
        printf("2. Display All Players\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Remove Player\n");
        printf("6. Display Sorted Players\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
            	if(count>=n)
            	{
            		printf("Player limit reached. Cannot add more players:");
            		break;
				}
				else
				{
                	addPlayer(players, &count, n);
                	break;
                }
            case 2:
                displayAllPlayers(players, count);
                break;
            case 3:
                searchPlayer(players, count);
                break;
            case 4:
                updatePlayer(players, count);
                break;
            case 5:
                removePlayer(players, &count);
                break;
            case 6:
                displaySortedPlayers(players, count);
                break;
            case 7:
                printf("Exiting...\n");
                free(players);         //free memory allocated by malloc
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

void addPlayer(Player players[], int *count, int n) 
{
    if (*count >= n) 
	{
        printf("Player limit reached. Cannot add more players.\n");
        return;
    }

    printf("Enter Jersey Number: ");
    scanf("%d", &players[*count].jersey_number);
    printf("Enter Name: ");
    scanf("%s", players[*count].name);
    printf("Enter Runs: ");
    scanf("%d", &players[*count].runs);
    printf("Enter Wickets: ");
    scanf("%d", &players[*count].wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &players[*count].matches_played);

    (*count)++;
    printf("Player added successfully.\n");
}

void removePlayer(Player players[], int *count) 
{
    int jersey, found = 0;
    printf("Enter Jersey Number to Remove: ");
    scanf("%d", &jersey);

    for (int i = 0; i < *count; i++) 
	{
        if (players[i].jersey_number == jersey) 
		{
            for (int j = i; j < *count - 1; j++) 
			{
                players[j] = players[j + 1];
            }
            (*count)--;
            printf("Player removed successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("Player not found.\n");
    }
}

void searchPlayer(Player players[], int count) 
{
    int jersey, found = 0;
    char name[20];
    int choice;

    printf("Search by:\n1. Jersey Number\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for (int i = 0; i < count; i++) 
		{
            if (players[i].jersey_number == jersey) 
			{
                printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                       players[i].jersey_number, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches_played);
                found = 1;
                break;
            }
        }
    } else if (choice == 2) 
	{
        printf("Enter Name: ");
        scanf("%s", name);
        for (int i = 0; i < count; i++) 
		{
            if (strcmp(players[i].name, name) == 0) 
			{
                printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                       players[i].jersey_number, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches_played);
                found = 1;
            }
        }
    }

    if (!found) 
	{
        printf("Player not found.\n");
    }
}

void updatePlayer(Player players[], int count) 
{
    int jersey, found = 0;
    printf("Enter Jersey Number to Update: ");
    scanf("%d", &jersey);

    for (int i = 0; i < count; i++) 
	{
        if (players[i].jersey_number == jersey) 
		{
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter New Matches Played: ");
            scanf("%d", &players[i].matches_played);
            printf("Player updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("Player not found.\n");
    }
}

void displayAllPlayers(Player players[], int count) 
{
    if (count == 0) 
	{
        printf("No players to display.\n");
        return;
    }

    for (int i = 0; i < count; i++) 
	{
        printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
               players[i].jersey_number, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches_played);
    }
}

void displaySortedPlayers(Player players[], int count) 
{
    if (count == 0) 
	{
        printf("No players to display.\n");
        return;
    }

    int choice;
    Player temp;

    printf("\n=== Sort Players ===\n");
    printf("1. Sort by Maximum Runs\n");
    printf("2. Sort by Minimum Runs\n");
    printf("3. Sort by Maximum Wickets\n");
    printf("4. Sort by Minimum Wickets\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1:
            for (int i = 0; i < count - 1; i++) 
			{
                for (int j = i + 1; j < count; j++) 
				{
                    if (players[i].runs < players[j].runs) 
					{
                        temp = players[i];
                        players[i] = players[j];
                        players[j] = temp;
                    }
                }
            }
            printf("\nSorted by Maximum Runs:\n");
            break;
        case 2:
            for (int i = 0; i < count - 1; i++) 
			{
                for (int j = i + 1; j < count; j++) 
				{
                    if (players[i].runs > players[j].runs) 
					{
                        temp = players[i];
                        players[i] = players[j];
                        players[j] = temp;
                    }
                }
            }
            printf("\nSorted by Minimum Runs:\n");
            break;
        case 3:
            for (int i = 0; i < count - 1; i++) 
			{
                for (int j = i + 1; j < count; j++) 
				{
                    if (players[i].wickets < players[j].wickets) 
					{
                        temp = players[i];
                        players[i] = players[j];
                        players[j] = temp;
                    }
                }
            }
            printf("\nSorted by Maximum Wickets:\n");
            break;
        case 4:
            for (int i = 0; i < count - 1; i++) 
			{
                for (int j = i + 1; j < count; j++) 
				{
                    if (players[i].wickets > players[j].wickets) 
					{
                        temp = players[i];
                        players[i] = players[j];
                        players[j] = temp;
                    }
                }
            }
            printf("\nSorted by Minimum Wickets:\n");
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    // Display sorted players
    displayAllPlayers(players, count);
}
