#include <stdint.h>
int main()
{
    int n = 5;
    // for (int i = 0; i <= n; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i >= j && j <= n - 1)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("* ");
    //         }
            
    //     }
    //     printf("\n");
    // }
     for (int i = n - 1; i >= 1; i--) {
        for (int b = 1; b <= n - i; b++)
            printf("  ");
        for (int a = 1; a <= 2 * i - 1; a++)
            printf("* ");
        printf("\n");
    }

}