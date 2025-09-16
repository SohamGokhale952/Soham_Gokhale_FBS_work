#include <stdio.h>
#include <string.h>
typedef struct sale_system
{

    char name[20];
    int price;
    int quantity;

} sale;
int toatal(sale *, int);
void main()
{

    sale sarr[10];

        strcpy(sarr[0].name, "bat");
        sarr[0].price = 1000;
        sarr[0].quantity = 0;

        strcpy(sarr[1].name, "ball");
        sarr[1].price = 2000;  
        sarr[1].quantity = 0;

        strcpy(sarr[2].name, "stump");
        sarr[2].price = 3000;
        sarr[2].quantity = 0;

        strcpy(sarr[3].name, "gloves");
        sarr[3].price = 4000;
        sarr[3].quantity = 0;

        strcpy(sarr[4].name, "shoes");
        sarr[4].price = 5000;
        sarr[4].quantity = 0;
    int flag = 0;
    while (flag == 0)
    {


        printf("Enter the choice: \n");
        int choice;
        printf("1:bat\n");
        printf("2:ball\n");
        printf("3:stump\n");
        printf("4:gloves\n");
        printf("5:shoes\n");
        printf("Enter the 0 to exit");
        scanf("%d", &choice);
        int n;
if (choice==0)
{
flag=1;
}

       else if (choice == 1)
        {
            printf("Enter the quantity:\n");
            scanf("%d", &n);
            sarr[0].quantity = n;
        }

        else if (choice == 2)
        {
            printf("Enter the quantity:\n");
            scanf("%d", &n);
            sarr[1].quantity = n;
        }

        else if (choice == 3)
        {
            printf("Enter the quantity:\n");
            scanf("%d", &n);
            sarr[2].quantity = n;
        }

        else if (choice == 4)
        {
            printf("Enter the quantity:\n");
            scanf("%d", &n);
            sarr[3].quantity = n;
        }

        else if (choice == 5)
        {
            printf("Enter the quantity:\n");
            scanf("%d", &n);
            sarr[4].quantity = n;
        }
    }

    // store(sarr, 3);
    // display(sarr, 3);

    int total = toatal(sarr, 5);
    printf("Your final price is:%d\n ", total);
}
// void store(sale *sarr, int size)
// {

//     for (int i = 0; i < size; i++)
//     {

//         printf("Enter the name: \n");
//         scanf(" %s", sarr[i].name);

//         printf("Enter the price: \n");
//         scanf("%d", &sarr[i].price);

//         printf("Enter the quantity: \n");
//         scanf("%d", &sarr[i].quantity);
//     }
// }

// void display(sale *sarr, int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         printf("Name is: %s\n", sarr[i].name);
//         printf("price is: %d\n", sarr[i].price);
//         printf("Salary quantity: %d\n", sarr[i].quantity);
//     }
// }

int toatal(sale *sarr, int size)
{

    // printf("Enter the name for total price: ");
    // char name[20];
    // scanf(" %s", name);

    int total_price = 0;
    for (int i = 0; i < size; i++)
    {

        total_price += sarr[i].quantity * sarr[i].price;
    }

    return total_price;
}
