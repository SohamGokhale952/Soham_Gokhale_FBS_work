#include <stdio.h>
void main()
{
    int a = printf("enter a: ");
    scanf("%d", &a);
    int b = printf("enter b: ");
    scanf("%d", &b);
    int c = printf("enter c: ");
    scanf("%d", &c);

    if (a > b)
    {
        printf("a is greater");
    }
    else if (a > c)
    {
        printf("a is greater");
    }
    // else if (b > a)
    // {
    //     printf("b is greater");
    // }

    else if (b > c)
                                            
    {
        /* code */ printf("b is greater");
    }

    else
    {
        printf("c is greater");
    }
}