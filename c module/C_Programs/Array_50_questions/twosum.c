#include<stdio.h>
void main(){

    int arr[5];
    //scan the array
    //you have to & while scanning the elements
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    //print
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
    printf("Enter the target");
    int target;
    scanf("%d",&target);
for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j <5; j++)
    {
       if (target==arr[i]+arr[j])
    {
      printf("first index is %d and second one is %d",i,j);
    printf("hello");
    }
    }
    
    
    
}



}