#include <stdio.h>
int discount();
void main()
{
    float purchase;
    printf("enter the price: ");
    scanf("%f", &purchase);
    char student;
    printf("enter you are student or not: ");
    scanf(" %c", &student);
   int x= discount(purchase,student);
   printf("final price: %d",x);
}

int discount(float purchase,char student){
    
    float discount;
    

    

    if (student == 'y' || student=='Y')
    {
        if (purchase > 500)
        {
            printf("20 persent discount is applied\n");
            discount = purchase * (20.0 / 100.0);
            printf("%f\n", discount);
        }
        else
        {
            printf("10 persent discount is applied\n");

            discount = purchase * (10.0 / 100.0);
            printf("%f\n", discount);
        }
    }
    else
    {
        if (purchase > 600)
        {
            printf("15 persent discount is applied\n");

            discount = purchase * (15.0 / 100.0);
            printf("%f\n", discount);
        }
        else
        {
            printf("No discount is applied\n");

            discount = 0.0;
            printf("%f\n", discount);
        }
    }
       printf("Discount amount: %f\n", discount);
    int final_price=purchase - discount;
    return final_price;
}