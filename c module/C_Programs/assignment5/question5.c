#include <stdint.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            if (i >= j && j <= n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
}