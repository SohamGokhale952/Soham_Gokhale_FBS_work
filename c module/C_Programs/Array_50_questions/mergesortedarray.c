#include<stdio.h>

void main(){

int arr[6]={8,2,4};
int arr1[3]={2,5,6};
int index=3;
int j=0;
for (int  i = index; i < 6; i++)
{
 arr[i]=arr1[j];   
 j++;
}
//   for (int i = 0; i < 6; i++) {
//         printf("%d ", arr[i]);
//     }


    for (int i = 0; i < 6; i++)
    {
       for (int j = i+1; j < 6; j++)
       {
       if (arr[i]>arr[j])
       {
        int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       }
       
       }
       
    }
    
  for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

}