#include<stdio.h>
void swap(int*,int*);
void main(){
int arr[5];
printf("enter the values in aarray");
for (int i = 0; i < 5; i++)

{
    scanf("%d",&arr[i]);
}

for (int i = 0; i < 5; i++){
printf("%d\n",arr[i]);
}

//maximum no
int max=arr[0];
for (int i = 1; i < 5; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
    }
    
}
printf("%d is maximum\n",max);


//sum of elements

int sum=0;
for (int i = 0; i < 5; i++)
{
    /* code */
sum=sum+arr[i];

}

printf("%d is sum",sum);


//reverse the array
// int start=0,end=5;
// for (int i = 4; i>=0; i--)
// {
//     /* code */

// printf("%d",arr[i]);

// }
printf("i am here");
int start=  0,end=4;
while(start<=end)
{
    /* code */
    swap(&arr[start],&arr[end]);
    start++;
    end--;



}


    printf("Array after reversing:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int* start,int* end){
    int temp=*start;
    *start=*end;
    *end=temp;
}