

#include <stdio.h>
void main()
{
    int start, end;
    printf("Enter the start: ");
    scanf("%d", &start);
    printf("Enter the end: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        printf("%d =", i);  
        for (int j = 1; j <= i; j++)  
        {
            if (i % j == 0)
            {
                printf(" %d", j);  
        }
        
    }
    }
}
