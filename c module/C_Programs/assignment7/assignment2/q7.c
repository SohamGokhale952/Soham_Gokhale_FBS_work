#include <stdio.h>
int triangle();
int main()
{
    int x = triangle();

    if (x == 1)
    {
        /* code */ printf("isoscales");
    }
    else if (x == 2)
    {
        /* code */ printf("equilateral");
    }
else    {
        /* code */ printf("scalen");
    }
}

int triangle()
{
    float side1, side2, side3;
    printf("Enter the length of side1: ");
    scanf("%f", &side1);
    printf("Enter the length of side2: ");
    scanf("%f", &side2);
    printf("Enter the length of side3: ");
    scanf("%f", &side3);
    if (side1 == side2 && side2 == side3)
    {
        return 1;
    }

    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        return 2;
    }

    else
    {
        return 3;
    }
}