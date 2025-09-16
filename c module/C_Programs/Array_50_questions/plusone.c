#include<stdio.h>
void main(){
    int arr[3]={1,2,3};
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
     sum=10*sum+arr[i];
    }
    
    // printf("%d",sum);
   
int no=sum+1;
 printf("%d",no);
for (int i = 2;no!=0; i--)
{
    int r1=no%10;
     arr[i]=r1;
     no=no/10;
}
for (int i = 0; i < 3; i++)
{
printf("%d",arr[i]);
}


}