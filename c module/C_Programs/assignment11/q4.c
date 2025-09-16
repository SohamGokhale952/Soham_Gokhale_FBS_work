//even odd elements

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
for (int i = 0; i < 5; i++)
{
    if (arr[i]%2==0)
    {
        printf("even no are %d\n",arr[i]);
    }
     else 
    {
        printf("odd no are %d",arr[i]);
    }
    

}
}