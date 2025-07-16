//sum of elements

#include <stdio.h>
void main()
{
    printf("Enter the array");
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
int sum=0;
for (int i = 0; i < 5; i++)
{
    sum=sum+arr[i];
}

printf("sum is %d",sum);
}