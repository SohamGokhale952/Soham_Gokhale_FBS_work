#include <stdio.h>
void main() {


    int base;
    printf("enter the base");   
    scanf("%d",&base);
    int pow;
    printf("enter the power");
    scanf("%d",&pow);
    int ans = 1;

    for (int i = 1; i <= pow; i++) {
        ans = ans * base;
    }

    printf("Result: %d\n", ans);
}
