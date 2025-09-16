#include<stdio.h>

void main(){
int arr[5]={1,2,3,4,5};
int brr[5]={1,4,7,3,2};

for (int  i = 0; i < 5; i++)
{
    for (int j = 0; j <5; j++)
    {
        /* code */
         if (arr[i]==brr[j])
    {

        printf("%d",arr[i]);
    }
    }
    
   
    
}



}