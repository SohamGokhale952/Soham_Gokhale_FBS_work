#include <stdio.h>
void isgreater(int*,int*,int*);
void main()
{   int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    int c;
    printf("enter c: ");
    scanf("%d", &c);
    isgreater(&a,&b,&c);
}
void isgreater(int* a,int* b,int* c){
    
    

    if (*a > *b)
    {
        if (*a > *c)
        {
            printf("a is greater");
        }
        else if (*c > *a)
        {
            printf("c is greater");
        }
        
    }
    else
    {
        if (*b > *c)
        {
            printf("b is greater");
        }
        else if (*c > *b)
        {
            printf("c is greater");
        }
    }
}