#include <stdio.h>

int main() {
    int n = 5;

   
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= n - i; b++)
            printf("  "); // 2 spaces for centering
        for (int a = 1; a <= 2 * i - 1; a++)
            printf("* ");
        printf("\n");
    }


    for (int i = n - 1; i >= 1; i--) {
        for (int b = 1; b <= n - i; b++)
            printf("  ");
        for (int a = 1; a <= 2 * i - 1; a++)
            printf("* ");
        printf("\n");
    }

}
