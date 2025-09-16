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

    // default player 2
    parr[1].id = 2;
    strcpy(parr[1].Name, "Virat");
    parr[1].Jersey_Number = 22;
    parr[1].Runs = 123224;
    parr[1].Wickets = 124;
    parr[1].Matches_played = 12324;

    // default player 3
    parr[2].id = 3;
    strcpy(parr[2].Name, "ravindra");
    parr[2].Jersey_Number = 42;
    parr[2].Runs = 12224;
    parr[2].Wickets = 1324;
    parr[2].Matches_played = 1324;

    printf("\n=========== Default Players ===========\n");
    for (int i = 0; i < 3; i++)
    {
        printf("ID: %d\n", parr[i].id);
        printf("Name of the player: %s\n", parr[i].Name);
        printf("Jersey no: %d\n", parr[i].Jersey_Number);
        printf("Runs: %d\n", parr[i].Runs);
        printf("Wickets: %d\n", parr[i].Wickets);
        printf("Matches Played: %d\n", parr[i].Matches_played);
        printf("---------------------------------------\n");
    }

    int old_size = 3;
    int choice;

    do
    {
        printf("\n=========== Player Management Menu ===========\n");
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
            printf("Exiting program...\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);
}

// ----------------------------------------
// Functions

void add(Player *parr, int n, int *old_size)
{
    int k = *old_size;
    for (int i = 0; i < n; i++)
    {
        int isduplicate;
        do
        {
            isduplicate = 1;
            printf("\nEnter ID: ");
            scanf("%d", &parr[*old_size].id);

            for (int i = 0; i < *old_size; i++)
            {
                if (parr[i].id == parr[*old_size].id)
                {
                    printf("ID already exists. Please enter a unique ID.\n");
                    isduplicate = 0;
                    break;
                }
            }
        } while (!isduplicate);

        printf("Enter the name of the player %d: ", i + 1);
        scanf(" %s", parr[k].Name);

        printf("Enter the jersey number: ");
        scanf("%d", &parr[k].Jersey_Number);

        printf("Enter the runs: ");
        scanf("%d", &parr[k].Runs);

        printf("Enter the number of wickets: ");
        scanf("%d", &parr[k].Wickets);

        printf("Enter the number of matches played: ");
        scanf("%d", &parr[k].Matches_played);

        k++;
    }
    *old_size = k;
}

void display(Player *parr, int n)
{
    printf("\n=========== Player List ===========\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d\n", parr[i].id);
        printf("Name of the player: %s\n", parr[i].Name);
        printf("Jersey no: %d\n", parr[i].Jersey_Number);
        printf("Runs: %d\n", parr[i].Runs);
        printf("Wickets: %d\n", parr[i].Wickets);
        printf("Matches Played: %d\n", parr[i].Matches_played);
        printf("-----------------------------------\n");
    }
}

void removed(Player *parr, int *old_size)
{
    printf("\nEnter the player ID you want to delete: ");
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
        printf("Player not found.\n");
    }
    else
    {
        printf("Player removed successfully.\n");
        (*old_size)--;
    }
}

void search(Player *parr, int *old_size)
{
    printf("\nEnter the name and jersey number to search: ");
    char pname[20];
    int jno;
    scanf(" %s", pname);
    scanf("%d", &jno);

    int found = 0;
    for (int i = 0; i < *old_size; i++)
    {
        if (strcmp(parr[i].Name, pname) == 0 && parr[i].Jersey_Number == jno)
        {
            printf("\nPlayer found!\n");
            printf("ID: %d\n", parr[i].id);
            printf("Name of the player: %s\n", parr[i].Name);
            printf("Jersey no: %d\n", parr[i].Jersey_Number);
            printf("Runs: %d\n", parr[i].Runs);
            printf("Wickets: %d\n", parr[i].Wickets);
            printf("Matches Played: %d\n", parr[i].Matches_played);
            printf("-----------------------------------\n");
            found = 1;
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
    printf("\nEnter the ID of the player you want to update: ");
    int id, choice;
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < *old_size; i++)
    {
        if (parr[i].id == id)
        {
            found = 1;
            printf("Player found. You can update multiple attributes.\n");

            do
            {
                printf("\nCurrent Info:\n");
                printf("ID: %d\n", parr[i].id);
                printf("Name: %s\n", parr[i].Name);
                printf("Jersey Number: %d\n", parr[i].Jersey_Number);
                printf("Runs: %d\n", parr[i].Runs);
                printf("Wickets: %d\n", parr[i].Wickets);
                printf("Matches Played: %d\n", parr[i].Matches_played);

                printf("\nChoose an attribute to update:\n");
                printf("1. Jersey Number\n");
                printf("2. Runs\n");
                printf("3. Wickets\n");
                printf("4. Matches Played\n");
                printf("0. Exit Update Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                if (choice == 1)
                {
                    printf("Enter new Jersey Number: ");
                    scanf("%d", &parr[i].Jersey_Number);
                }
                else if (choice == 2)
                {
                    printf("Enter new Runs: ");
                    scanf("%d", &parr[i].Runs);
                }
                else if (choice == 3)
                {
                    printf("Enter new Wickets: ");
                    scanf("%d", &parr[i].Wickets);
                }
                else if (choice == 4)
                {
                    printf("Enter new Matches Played: ");
                    scanf("%d", &parr[i].Matches_played);
                }
                else if (choice == 0)
                {
                    printf("Exiting update menu.\n");
                }
                else
                {
                    printf("Invalid choice.\n");
                }

            } while (choice != 0);

            printf("\nUpdated Info:\n");
            printf("ID: %d\n", parr[i].id);
            printf("Name: %s\n", parr[i].Name);
            printf("Jersey Number: %d\n", parr[i].Jersey_Number);
            printf("Runs: %d\n", parr[i].Runs);
            printf("Wickets: %d\n", parr[i].Wickets);
            printf("Matches Played: %d\n", parr[i].Matches_played);
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
    printf("Enter your choice: ");
    scanf("%d", &choice);

    Player temp;
    for (int i = 0; i < *old_size - 1; i++)
    {
        for (int j = i + 1; j < *old_size; j++)
        {
            if ((choice == 1 && parr[i].Runs < parr[j].Runs) ||
                (choice == 2 && parr[i].Wickets < parr[j].Wickets))
            {
                temp = parr[i];
                parr[i] = parr[j];
                parr[j] = temp;
            }
        }
    }

    if (choice == 1)
    {
        printf("\nTop 3 Performers by Runs:\n");
    }
    else if (choice == 2)
    {
        printf("\nTop 3 Performers by Wickets:\n");
    }
    else
    {
        printf("Invalid choice.\n");
        return;
    }

    int limit = (*old_size < 3) ? *old_size : 3;
    for (int i = 0; i < limit; i++)
    {
        printf("ID: %d\n", parr[i].id);
        printf("Name: %s\n", parr[i].Name);
        printf("Jersey No: %d\n", parr[i].Jersey_Number);
        printf("Runs: %d\n", parr[i].Runs);
        printf("Wickets: %d\n", parr[i].Wickets);
        printf("Matches Played: %d\n", parr[i].Matches_played);
        printf("-----------------------------------\n");
    }
}
