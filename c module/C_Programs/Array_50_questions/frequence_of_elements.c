#include<stdio.h>
void main(){
int n=6;
    int arr[]={1,2,1,2,1,4};

    freq(arr,n);



}

freq(int* arr,int n){
int dup[10];
int k=0;
for (int i = 0; i < n; i++)

{

int counted=1;

for (int x = 0; x < k; x++)
{
if (dup[x]==arr[i])
{
 counted=0;
break;
}
}

if (counted==0)
continue;




   int count=1;
for (int j = 0; j < n; j++)
{
    if (i!=j&&arr[i]==arr[j])
    {
       count++;
     
    }
    
}

  dup[k]=arr[i];
       k++;
printf("%d->%d \n",arr[i],count);

}




}