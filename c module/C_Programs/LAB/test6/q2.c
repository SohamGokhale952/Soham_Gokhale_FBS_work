#include<stdio.h>
void main(){
int arr[5]={1,2,6,4,5};
int max=arr[0];
for (int i = 0; i < 5; i++)
{
    if (arr[i]>arr[max])
    {
        max=arr[i];
    }


}

    printf("%d",max);
    int min=-1;

for (int i = 0; i < 5; i++)
{
    if (arr[i] != max)
    {
        if (arr[i] > min)
    {
          min = arr[i];
    }
    }
    
}


printf("%d",min);

}