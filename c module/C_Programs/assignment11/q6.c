#include <stdio.h>
void main()
{
    printf("Enter the array: \n");
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
            int flag = 0;
    if (arr[i] <= 1)
            continue; 
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
printf("%d is prime \n",arr[i]);        }
        
    }
}