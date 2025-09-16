#include <stdio.h>
void display(int* ,int );

void input(int* ,int );
void main()
{
   printf("Enter the array");
    int arr[5];
input(&arr,5);
    display(&arr,5);

   
   
}

void input(int* arr,int size)
{

 
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

}

void display(int* arr,int size){
   for (int i = 0; i < 5; i+=2)
    {
        printf("%d", arr[i]);
    }
}
    