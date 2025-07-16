//reverse array

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