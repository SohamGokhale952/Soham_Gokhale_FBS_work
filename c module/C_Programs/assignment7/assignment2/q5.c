#include <stdio.h>
int isgreater();
void main()
{
    isgreater();
}
int isgreater(){
    
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
return a;        }
        else if (c > a)
        {
return c;        }
        
    }
    else
    {
        if (b > c)
        {
return b;        }
        else if (c > b)
        {
return c;        }
    }
}