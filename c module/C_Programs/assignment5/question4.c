#include<stdio.h>
int main()
{


    int n = 5;

   
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= n - i; b++)
            printf("  "); 
        for (int a = 1; a <= 2 * i - 1; a++)
            printf("* ");
        printf("\n");
    }

}