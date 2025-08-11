typedef struct {
    int jersey_number;
    char name[20];
    int runs;
    int wickets;
    int matches_played;
} Player;
#include<stdio.h>
#include<string.h>
void* addPlayer(Player **players, int *count);
void removePlayer(Player players[], int *count);
void searchPlayer(Player players[], int count);
void updatePlayer(Player players[], int count);
void displayAllPlayers(Player players[], int count); 
void displaySortedPlayers(Player players[], int count);
void main()
{
    Player *players=NULL;
    int count = 0;
    int choice;

    while (1) 
	{
        printf("\n------Player Management System------\n");
        printf("1. Add Player\n");
        printf("2. Display All Players\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Remove Player\n");
        printf("6. Display sortedPlayers\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            addPlayer(&players, &count);
        } 
		else if (choice == 2)
		{
            displayAllPlayers(players, count);
        } 
		else if (choice == 3)
		{
            searchPlayer(players, count);
        } 
		else if (choice == 4)
		{
            updatePlayer(players, count);
        } 
		else if (choice == 5) 
		{
            removePlayer(players, &count);
        } 
		else if (choice == 6)
		{
            displaySortedPlayers(players, count);
        } 
		else if (choice == 7)
		{
			printf("Invalid choice\n");
            break;
        } 
        
        
		
    }
   		free(players);      //free memory after the loop end
}

// Function to add a new player

void* addPlayer(Player **players, int *count)
{
	*players=realloc(*players,10000000000000000*sizeof(Player));
	if(*players==NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
    printf("Enter Jersey Number: ");
    scanf("%d", &(*players)[*count].jersey_number);
    printf("Enter Name: ");
    scanf("%s", (*players)[*count].name);
    printf("Enter Runs: ");
    scanf("%d", &(*players)[*count].runs);
    printf("Enter Wickets: ");
    scanf("%d", &(*players)[*count].wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &(*players)[*count].matches_played);
    (*count)++;
    printf("Player added successfully.\n");
}

// Function to remove a player by jersey number
void removePlayer(Player players[], int *count)
 {
    int jersey, i, found = 0;
    printf("Enter Jersey Number to Remove: ");
    scanf("%d", &jersey);
    for (i = 0; i < *count; i++) 
	{
        if (players[i].jersey_number == jersey) 
		{
            found = 1;
            for (int j = 0; j < *count - 1; j++)
			{
                players[j] = players[j + 1];
            }
            (*count)--;
            printf("Player removed successfully.\n");
            break;
        }
    }
    if (!found)
	{
        printf("Player not found.\n");
    }
}

// Function to search for a player
void searchPlayer(Player players[], int count)
 {
    int jersey, found = 0;
    char name[50];
    printf("Search by:\n1. Jersey Number\n2. Name\nEnter choice: ");
    int opt;
    scanf("%d", &opt);
    if (opt == 1)
	{
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for (int i = 0; i < count; i++)
		{
            if (players[i].jersey_number == jersey) 
			{
                found = 1;
                printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                    players[i].jersey_number, players[i].name,
                    players[i].runs, players[i].wickets, players[i].matches_played);
                break;
            }
        }
    } else if (opt == 2) 
	{
        printf("Enter Name: ");
		scanf("%s",&name);
		
		
        for (int i = 0; i < count; i++)
        {		char ch=strcmp(players[i].name, name);
            if (ch == 0)
			{
                found = 1;
                printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                    players[i].jersey_number, players[i].name,
                    players[i].runs, players[i].wickets, players[i].matches_played);
            }
        }
    }
    if (!found) 
	{
        printf("Player not found.\n");
    }
}


// Function to update player data
void updatePlayer(Player players[], int count) 
{
    int jersey, found = 0;
    printf("Enter Jersey Number to Update: ");
    scanf("%d", &jersey);
    for (int i = 0; i < count; i++) 
	{
        if (players[i].jersey_number == jersey) 
		{
            found = 1;
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter New Matches Played: ");
            scanf("%d", &players[i].matches_played);
            printf("Player data updated.\n");
            break;
        }
    }
    if (!found) 
	{
        printf("Player not found.\n");
    }
}

// Function to display all players
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

// Function to display sorted players by runs and wickets
void displaySortedPlayers(Player players[], int count) 
{
    if (count == 0) 
	{
        printf("No players to display.\n");
        return;
    }

    int choice;
    Player temp;

    printf("\n=== Sort Player Records ===\n");
    printf("1. Sort by Maximum Runs\n");
    printf("2. Sort by Minimum Runs\n");
    printf("3. Sort by Maximum Wickets\n");
    printf("4. Sort by Minimum Wickets\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
	 {
        case 1:
            // Sort by runs descending (maximum runs first)
            for (int i = 0; i < count - 1; i++)            //pick one player at a time
			{
                for (int j = i + 1; j < count; j++)          //right player to swap
				{
                    if (players[i].runs < players[j].runs) 
					{
                        temp = players[i];
                        players[i] = players[j];
                        players[j] = temp;
                    }
                }
            }
            printf("\nPlayers Sorted by Maximum Runs:\n");
            break;

        case 2:
            // Sort by runs ascending (minimum runs first)
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
            printf("\nPlayers Sorted by Minimum Runs:\n");
            break;

        case 3:
            // Sort by wickets descending (maximum wickets first)
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
            printf("\nPlayers Sorted by Maximum Wickets:\n");
            break;

        case 4:
            // Sort by wickets ascending (minimum wickets first)
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
            printf("\nPlayers Sorted by Minimum Wickets:\n");
            break;

        default:
            printf("Invalid choice.\n");
            return;
    }

    // Print all sorted players
    for (int i = 0; i < count; i++) 
	{
        printf("Jersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
            players[i].jersey_number, players[i].name,
            players[i].runs, players[i].wickets, players[i].matches_played);
    }
}




