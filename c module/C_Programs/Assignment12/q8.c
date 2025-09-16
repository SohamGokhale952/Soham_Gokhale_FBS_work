#include <stdio.h>

void main()
{
    int n, n1;
    printf("Enter size of array 1: ");
    scanf("%d", &n);
    int arr[n];


    printf("Enter elements of array 1:\n");
    input1(&arr, n);

    printf("Enter size of array 2: ");
    scanf("%d", &n1);
    int arr2[n1];
    printf("Enter elements of array 2:\n");
    input2(&arr2, n1);

    mergearray(&arr,&arr2,n,n1);
    
}

input1(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

input2(int *arr2, int n1)
{
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr2[i]);
    }
}
mergearray(int*arr,int*arr2,int n,int n1){
int temp[n + n1];

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n1; i++)
    {
        temp[n + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < n + n1; i++)
    {
        printf("%d ", temp[i]);
    }
}