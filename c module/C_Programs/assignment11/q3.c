// sum of elements
 input(int*, int);
    disp(int*, int);
    sum(int*, int);
#include <stdio.h>
void main()
{
    int arr[5];

    input(arr, 5);
    disp(arr, 5);
    sum(arr, 5);
}

input(int *arr, int size)
{
    printf("Enter the array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

disp(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
sum(int *arr, int size)
{

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("sum is %d", sum);
}