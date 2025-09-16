#include <stdio.h>
int isgreater(int ,int,int);
void main()
{
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    int c;
    printf("enter c: ");
    scanf("%d", &c);

    isgreater(a,b,c);
}
int isgreater(int a,int b,int c){
    
    
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