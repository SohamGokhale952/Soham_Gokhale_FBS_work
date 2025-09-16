#include<stdio.h>

void position(int arr[], int *x, int *y);

int main(void)
{

    int arr[10];
    printf("enter the array\n");
    for (int i = 0; i < 10; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    printf("Enter the position x: ");
    int x;
    scanf("%d", &x);
     printf("Enter the position y: ");
    int y;
    scanf("%d", &y);

    position( arr,&x,&y);
    return 0;
}


void position(int arr[], int *x, int *y)
{
    int temp;
    temp = arr[*x];
    arr[*x] = arr[*y];
    arr[*y] = temp;

    printf("After swapping:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
