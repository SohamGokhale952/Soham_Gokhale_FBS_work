//even odd elements
#include <stdio.h>
void display(int* ,int );

void input(int* ,int );
void evenodd(int*,int );
void main()
{
     printf("Enter the array");
    int arr[5];
input(&arr,5);
    display(&arr,5);
evenodd(&arr,5);
  

}

void input(int* arr,int size)
{

 
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

}
void display(int* arr,int size){
 for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void evenodd(int*arr,int size){

    
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