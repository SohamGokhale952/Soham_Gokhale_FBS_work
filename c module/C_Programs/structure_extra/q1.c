// 1. Create a structure Book with data members as bname, id, author, price. Accept the
// values of all these members from user and display them.

#include <stdio.h>
#include<stdlib.h>
typedef struct Book
{

    char bname[20];
    int id;
    char author[20];
    int price;
} Book;

void main()
{

    Book* brr=(Book*)malloc(sizeof(Book)*10 ); 
    store(brr, 10);
    Display(brr, 10);
}

void store(Book *brr, int size)
{

    for (int i = 0; i < 4; i++)
    {     printf("Enter the Bookname,id,author,price %d\n",i+1);

        scanf(" %s", brr[i].bname);
        scanf("%d", &brr[i].id);
        scanf(" %s", brr[i].author);
        scanf("%d", &brr[i].price);
    }
}

Display(Book brr[], int size)
{

    for (int i = 0; i < 4; i++)
    {
        printf("Book name:  %s\n", brr[i].bname);
        printf("Book ID:  %d\n", brr[i].id);

        printf("Book Author:  %s\n", brr[i].author);

        printf("Book Price:  %d\n", brr[i].price);
    }
}