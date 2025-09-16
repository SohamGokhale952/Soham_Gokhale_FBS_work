// find given elemment in array

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
        printf("%d", arr[i]);
    }

    printf("Enter the no you want to enter");
int no;
scanf("%d",&no);

for (int i = 0; i < 5; i++)
{
    if (no==arr[i])
    {
        printf("%d is found at the location of %d",no,i);
    }
    
}




}