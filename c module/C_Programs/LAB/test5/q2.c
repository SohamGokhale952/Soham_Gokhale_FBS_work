#include <stdio.h>
void main()
{
    int balance = 50000;
    printf("enter the choice:\n");
    printf("1.for withdraw\n");

    printf("2.for credit\n");
    int choice;
    printf("Enter the chioce: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int withamount;
        printf("enter the amount you want to withdraw: ");
        scanf("%d", &withamount);
        if (balance > 3000)
        {
            balance = balance - withamount;
            if (balance < 3000)
            {

                printf("balance in not sufficient\n");
            }

            printf("%d is the available balance", balance);
        }
       
        
    }

    else
    {
        int credit;
        printf("Enter the amount you want to credit:  ");
        scanf("%d", &credit);
        balance = balance + credit;
        printf("the available balance is: %d", balance);
    }
}