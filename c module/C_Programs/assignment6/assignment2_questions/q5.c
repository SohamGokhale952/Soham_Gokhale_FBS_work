#include <stdio.h>
void isgreater();
void main()
{
    isgreater();
}
void isgreater(){
    
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    int c;
    printf("enter c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater");
        }
        else if (c > a)
        {
            printf("c is greater");
        }
        
    }
    else
    {
        if (b > c)
        {
            printf("b is greater");
        }
        else if (c > b)
        {
            printf("c is greater");
        }
    }
}