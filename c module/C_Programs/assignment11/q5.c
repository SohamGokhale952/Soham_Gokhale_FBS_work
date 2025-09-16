#include <stdio.h>
void main()
{
    printf("Enter the array");
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < 5; i+=2)
    {
        printf("%d", arr[i]);
    }
}