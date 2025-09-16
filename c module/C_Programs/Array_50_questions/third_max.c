#include<stdio.h>
void main()
{
    int arr[]={2,2,3,1,4,5};

    int max=arr[0];
for (int i = 1; i < 6; i++)
{

    if (arr[i]>max)
    {
       max=arr[i];

    }
    


}

printf("%d",max);
int second_max=-1;
for (int i = 0; i < 6; i++)
{

    if (arr[i]!=max && arr[i]>second_max)
    {
       second_max=arr[i];

    }
    


}
printf("%d",second_max);

int third_max=-2;
for (int i = 0; i < 6; i++)
{

    if (arr[i]!=max &&arr[i]!=second_max&& arr[i]>third_max)
    {
       third_max=arr[i];

    }
    


}
printf("%d",third_max);
}