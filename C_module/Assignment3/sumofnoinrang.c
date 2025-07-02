#include<stdio.h>
int main(){
int i,sum=0,n;
printf("Enter the start point: ");
scanf("%d",&i);
printf("Enter the endpoint: ");
scanf("%d",&n);
while (i<=n)
{
    /* code */
    sum=sum+i;
    
    i++;
}


printf("%d",sum);

}