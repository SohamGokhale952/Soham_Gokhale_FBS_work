#include<stdio.h>
#include<stdlib.h>
void main(){
// int arr[5];
    int*arr=(int*)malloc(sizeof(int)*5);

printf("enter the values in aarray");
for (int i = 0; i < 5; i++)

{
    scanf("%d",&arr[i]);
}



for (int i = 0; i < 5; i++)
{
for (int j = i+1; j <5; j++)
{
    /* code */
    if (arr[i]>arr[j])
    {
        // max=j;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
}
}

for (int i = 0; i < 5; i++)
{
    printf("%d",arr[i]);
}




}