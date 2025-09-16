#include <stdio.h>

void sum(int*, int*);

int main() {
    int i, n;
    printf("Enter the start point: ");
    scanf("%d", &i);
    printf("Enter the endpoint: ");
    scanf("%d", &n);
    
    sum(&i, &n);
    
    return 0;
}

void sum(int* i, int* n) {
    int sum = 0;
    int temp = *i;
    
    while (temp <= *n) {
        sum = sum + temp;
        temp++;
    }

    printf("Sum = %d\n", sum);
}
