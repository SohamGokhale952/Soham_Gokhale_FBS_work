#include <stdio.h>
void main()
{
    int amount;
    printf("enter th amount");
    scanf("%d",&amount);
    int note[9] = {500, 200, 100, 50, 20, 10,5,2,1};
    int count[9] = {0};
    for (int i = 0; i < 9; i++)
    {
        if (amount >= note[i])
        {
            count[i] = amount / note[i];
            amount = amount % note[i];
        }
    }
     
    for(int i = 0; i < 9; i++) {
       
            printf("%d\n", count[i]);
      
    }
}