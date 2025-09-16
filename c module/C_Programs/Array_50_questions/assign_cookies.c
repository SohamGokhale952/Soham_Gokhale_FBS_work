#include<stdio.h>
void main(){

int arr[]={1,2,3};//children
int arr1[]={1,2,3};//cookies


int match[100]={0};
int lastindex=-1;

for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
if (arr[i]==arr1[j])
{
    match[i]=arr[i];
    lastindex=arr[i];
break;
}
}



}
if (lastindex != -1)
        printf("%d", lastindex);
    else
        printf("No match found\n");








}