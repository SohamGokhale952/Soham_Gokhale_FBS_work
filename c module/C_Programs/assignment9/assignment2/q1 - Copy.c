
#include <stdio.h>
int isdivisible();
void main()
{
    int x = isdivisible();
    if (x == 4)
    {
        printf("divisible by both");
    }
  else  if (x == 1)
    {
        printf("divisible by 3");
    }
    else if (x == 2)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("divisible by none");
    }
}
int isdivisible()
{
    int no;
    printf("Enter the no: ");
    scanf("%d", &no);

    if (no % 3 == 0 && no % 5 == 0)
    {
        /* code */
        return 4;
    }
    else
    {
        if (no % 3 == 0)
        {
            return 1;
        }
        else if (no % 5 == 0)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
}
