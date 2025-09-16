#include<stdio.h>
void main(){
int arr[5]={1,2,3,4,5};
int target =3;
int start=0,end=4;

while (start<=end)
{
    int mid=(start+end)/2;
    if (arr[mid]==target)
    {
        printf("%d",mid);
        break;
    }
    else if (target>arr[mid])
    {
       start=mid+1;
    }
    else{
        end=mid-1;
    }
    
}





}