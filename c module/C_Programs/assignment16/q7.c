#include <stdio.h>
#include<stdlib.h>
void main()
{
    printf("Enter the array");
    // int arr[5];
        int*arr=(int*)malloc(sizeof(int)*5);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
        printf("Enter the array 2:\n");

    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }

int temp[5];

for (int i = 0; i < 5; i++)
{
temp[i]=arr2[i]+arr[i];


}
for (int i = 0; i < 5; i++)
{
printf( "%d",temp[i]);
}




    
}