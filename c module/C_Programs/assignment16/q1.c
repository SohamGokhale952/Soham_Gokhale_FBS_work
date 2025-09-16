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
int min=arr[0];
for (int i = 1; i < 5; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
    }
     if (arr[i]<min)
    {
        max=arr[i];
    }
    
}
    printf("%d is maximum\n",max);
printf("%d is minimum\n",min);



}