// 3. Write a program to create an array for 10 players. For each player store name, no. of
// matches played, runs, wickets takes.
// a. Create function to Accept the information of each player.
// b. Create function to display the information of all the players
// c. Display the information of player who made maximum runs and the one who took
// maximum number of wickets.

#include <stdio.h>
typedef struct player
{

    char name[20];
    int match_palyed;
    int runs;
    int wickkets;

} player;

void main()
{

    player prr[10];

    info(prr, 3);
    display(prr, 3);
    maxrun(prr, 3);
}

info(player *prr, int size)
{

    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("Enter the player %d info\n", i + 1);

        scanf(" %s", prr[i].name);
        scanf("%d", &prr[i].match_palyed);
        scanf("%d", &prr[i].runs);
        scanf("%d", &prr[i].wickkets);
    }
}

display(player *prr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Information of palyer %d\n", i + 1);
        printf("name: %s\n", prr[i].name);
        printf("no of matches played: %d\n", prr[i].match_palyed);
        printf("Runs: %d\n", prr[i].runs);
        printf("Wickets: %d\n", prr[i].wickkets);
    }
}

maxrun(player *prr, int size)
{
    int max = 0;
char name[20];
    for (int i = 1; i < size; i++)
    {

        if (prr[i].runs > max)
        {
            max =i;
            
        }
    }
printf("Max runs : %d By %s",prr[max].runs,prr[max].name);

}