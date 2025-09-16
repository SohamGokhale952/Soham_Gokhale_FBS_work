#include<stdio.h>
void main(){

int arr[5]={1,1,1,2,3};
int k=0;
for (int i = 0; i < 5; i++)
{     int duplicate=1;
   for (int j = 0; j< 5; j++)
   {
if (i!=j && arr[i]==arr[j])
{

duplicate=0;
break;

}
   }
   if (duplicate==1)
{
  arr[k]=arr[i];
  k++;
}
   
}
 for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }



}