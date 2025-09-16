
#include <stdio.h>
#include <string.h>
typedef struct Player
{
    int id;
    int Jersey_Number;
    char Name[20];
    int Runs;
    int Wickets;
    int Matches_played;
} Player;

void add(Player *, int, int *);
void display(Player *, int);
void search(Player *, int *);
void removed(Player *, int *);
void update(Player *, int *);
void displayTopPerformers(Player *, int *);

void main()
{

    Player parr[100];
    // default player 1
    parr[0].id = 1;
    strcpy(parr[0].Name, "Rohit");
    parr[0].Jersey_Number = 12;
    parr[0].Runs = 12324;
    parr[0].Wickets = 123224;
    parr[0].Matches_played = 12324;
    printf("Default players: \n");
    printf("ID:%d\n", parr[0].id);
    printf("Name of the player: %s\n", parr[0].Name);
    printf("Jesrsey no: %d\n", parr[0].Jersey_Number);
    printf("Runs: %d\n", parr[0].Runs);
    printf("Wickets: %d\n", parr[0].Wickets);
    printf("Matches Played:  %d\n", parr[0].Matches_played);

    // default player 2
    parr[1].id = 2;

    strcpy(parr[1].Name, "Virat");
    parr[1].Jersey_Number = 22;
    parr[1].Runs = 123224;
    parr[1].Wickets = 124;
    parr[1].Matches_played = 12324;
    printf("ID:%d\n", parr[1].id);
    printf("Name of the player: %s\n", parr[1].Name);
    printf("Jesrsey no: %d\n", parr[1].Jersey_Number);
    printf("Runs: %d\n", parr[1].Runs);
    printf("Wickets: %d\n", parr[1].Wickets);
    printf("Matches Played:  %d\n", parr[1].Matches_played);

    // default player 3
    parr[2].id = 3;

    strcpy(parr[2].Name, "ravindra");
    parr[2].Jersey_Number = 42;
    parr[2].Runs = 12224;
    parr[2].Wickets = 1324;
    parr[2].Matches_played = 1324;
    printf("ID:%d\n", parr[2].id);
    printf("Name of the player: %s\n", parr[2].Name);
    printf("Jesrsey no: %d\n", parr[2].Jersey_Number);
    printf("Runs: %d\n", parr[2].Runs);
    printf("Wickets: %d\n", parr[2].Wickets);
    printf("Matches Played:  %d\n", parr[2].Matches_played);

    int old_size = 3;
    int choice;
    do
    {
        printf("\n===== Player Management Menu =====\n");
        printf("1. Add Players\n");
        printf("2. Display All Players\n");
        printf("3. Remove Player\n");
        printf("4. Search Player\n");
        printf("5. Update Player\n");
        printf("6. Display Top 3 Performers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int n;
            printf("Enter the number of players to add: ");
            scanf("%d", &n);
            add(parr, n, &old_size);
        }
        else if (choice == 2)
        {
            display(parr, old_size);
        }
        else if (choice == 3)
        {
            removed(parr, &old_size);
        }
        else if (choice == 4)
        {
            search(parr, &old_size);
        }
        else if (choice == 5)
        {
            update(parr, &old_size);
        }
        else if (choice == 6)
        {
            displayTopPerformers(parr, &old_size);
        }
        else if (choice == 0)
        {
            printf("Exit.\n");
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

} // main

// functions

void add(Player *parr, int n, int *old_size)
{

    int k = *old_size;
    for (int i = 0; i < n; i++)
    {
        int isduplicate;
        do
        {
            isduplicate = 1;
            printf("Enter ID: ");
            scanf("%d", &parr[*old_size].id);

            for (int i = 0; i < *old_size; i++)
            {
                if (parr[i].id == parr[*old_size].id)
                {
                    printf("ID already exists.. Please enter a unique ID.\n");
                    isduplicate = 0;
                    break;
                }
            }
        } while (!isduplicate);

        printf("Enter the name of the player %d:\n", i + 1);
        scanf(" %[^\n]", parr[k].Name);

        printf("Enter the jersy no of the player:\n ");
        scanf(" %d", &parr[k].Jersey_Number);
        printf("Enter the runs of the player:\n ");
        scanf(" %d", &parr[k].Runs);
        printf("Enter the no of wickets of the player:\n ");
        scanf(" %d", &parr[k].Wickets);
        printf("Enter the no of matches played by the player:\n ");
        scanf(" %d", &parr[k].Matches_played);
        printf("Plyer added successfully!!");
        k++;
    }
    *old_size = k;
}

void display(Player *parr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d\n", parr[i].id);
        printf("Name of the player: %s\n", parr[i].Name);
        printf("Jesrsey no: %d\n", parr[i].Jersey_Number);
        printf("Runs: %d\n", parr[i].Runs);
        printf("Wickets: %d\n", parr[i].Wickets);
        printf("Matches Played:  %d\n", parr[i].Matches_played);
        printf("-----------------------------\n");
    }
}

void removed(Player *parr, int *old_size)
{

    printf("Enter the player ID you want delete\n");
    int id_del;
    scanf("%d", &id_del);
    int x = 0;
    for (int i = 0; i < *old_size; i++)
    {

        if (parr[i].id != id_del)
        {
            parr[x] = parr[i];
            x++;
        }
    }

    if (*old_size == x)
    {
        printf("Player not found....\n");
    }
    else
    {
        printf("Player is removed successfully...\n");
        (*old_size)--;
    }
}

void search(Player *parr, int *old_size)
{

    printf("Enter the name and jersey no You want to search: \n");
    char pname[20];
    int jno;
    scanf(" %[^\n]", pname);
    scanf(" %d", &jno);

    int found = 0;
    for (int i = 0; i < *old_size; i++)
    {
        if (strcmp(parr[i].Name, pname) == 0 && parr[i].Jersey_Number == jno)
        {
            printf("Player found!!\n");
            found = 1;
            printf("-----------------------------\n");

            printf("ID: %d\n", parr[i].id);
            printf("Name of the player: %s\n", parr[i].Name);
            printf("Jesrsey no: %d\n", parr[i].Jersey_Number);
            printf("Runs: %d\n", parr[i].Runs);
            printf("Wickets: %d\n", parr[i].Wickets);
            printf("Matches Played:  %d\n", parr[i].Matches_played);
            printf("-----------------------------\n");

            break;
        }
    }

    if (!found)
    {
        printf("Player not found.\n");
    }
}

void update(Player *parr, int *old_size)
{
    printf("Enter the ID of the player you want to update: \n");
    int id;
    int choice;
    int found = 0;

    scanf("%d", &id);

    for (int i = 0; i < *old_size; i++)
    {
        if (parr[i].id == id)
        {
            found = 1;
            printf("Player found. You can update multiple attributes.\n");

            do
            {

                printf("\n Player Info:\n");
                printf("ID: %d\n", parr[i].id);
                printf("Name: %s\n", parr[i].Name);
                printf("Jersey Number: %d\n", parr[i].Jersey_Number);
                printf("Runs: %d\n", parr[i].Runs);
                printf("Wickets: %d\n", parr[i].Wickets);
                printf("Matches Played: %d\n", parr[i].Matches_played);
                printf("-----------------------------\n");
                printf("\nChoose an attribute to update:\n");
                printf("1. Jersey Number\n");
                printf("2. Runs\n");
                printf("3. Wickets\n");
                printf("4. Matches Played\n");
                printf("0. Exit Update Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                    printf("Enter new Jersey Number: ");
                    scanf("%d", &parr[i].Jersey_Number);
                    break;
                case 2:
                    printf("Enter new Runs: ");
                    scanf("%d", &parr[i].Runs);
                    break;
                case 3:
                    printf("Enter new Wickets: ");
                    scanf("%d", &parr[i].Wickets);
                    break;
                case 4:
                    printf("Enter new Matches Played: ");
                    scanf("%d", &parr[i].Matches_played);
                    break;
                case 0:
                    printf("Exiting update menu.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
                }

            } while (choice != 0);

            printf("\nUpdated Player Info:\n");
            printf("ID: %d\n", parr[i].id);
            printf("Name: %s\n", parr[i].Name);
            printf("Jersey Number: %d\n", parr[i].Jersey_Number);
            printf("Runs: %d\n", parr[i].Runs);
            printf("Wickets: %d\n", parr[i].Wickets);
            printf("Matches Played: %d\n", parr[i].Matches_played);
            printf("-----------------------------\n");

            break;
        }
    }

    if (!found)
    {
        printf("Player with ID %d not found.\n", id);
    }
}

void displayTopPerformers(Player *parr, int *old_size)
{
    int choice;
    printf("\nDisplay Top 3 Performers By:\n");
    printf("1. Runs\n");
    printf("2. Wickets\n");
    printf("3. No of matches played\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    int i, j;
    Player temp;

    if (choice == 1) // Sort by runs 
    {
        for (i = 0; i < *old_size - 1; i++)
        {
            for (j = i + 1; j < *old_size; j++)
            {
                if (parr[i].Runs < parr[j].Runs)
                {
                    temp = parr[i];
                    parr[i] = parr[j];
                    parr[j] = temp;
                }
            }
        }
        printf("\nTop 3 Performers by Runs:\n");
    }
    else if (choice == 2) // Sort by wickets 
    {
        for (i = 0; i < *old_size - 1; i++)
        {
            for (j = i + 1; j < *old_size; j++)
            {
                if (parr[i].Wickets < parr[j].Wickets)
                {
                    temp = parr[i];
                    parr[i] = parr[j];
                    parr[j] = temp;
                }
            }
        }
        printf("\nTop 3 Performers by Wickets:\n");
    }
    else if (choice == 3) // Sort by matches played
    {
        for (i = 0; i < *old_size - 1; i++)
        {
            for (j = i + 1; j < *old_size; j++)
            {
                if (parr[i].Matches_played < parr[j].Matches_played)
                {
                    temp = parr[i];
                    parr[i] = parr[j];
                    parr[j] = temp;
                }
            }
        }
        printf("\nTop 3 Performers by No of matches played:\n");
    }
    else
    {
        printf("Invalid choice.\n");
        return;
    }

    int limit = (*old_size < 3) ? *old_size : 3;
    for (i = 0; i < limit; i++)
    {
        printf("ID: %d\n", parr[i].id);
        printf("Name: %s\n", parr[i].Name);
        printf("Jersey No: %d\n", parr[i].Jersey_Number);
        printf("Runs: %d\n", parr[i].Runs);
        printf("Wickets: %d\n", parr[i].Wickets);
        printf("Matches Played: %d\n", parr[i].Matches_played);
        printf("-----------------------------\n");
    }
}
