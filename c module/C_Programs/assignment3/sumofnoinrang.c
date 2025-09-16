#include<stdio.h>
int main(){
int i,sum=0,n;
printf("Enter the start point: ");
scanf("%d",&i);
printf("Enter the endpoint: ");
scanf("%d",&n);
// while (i<=n)
// {
//     /* code */
//     sum=sum+i;
    
//     i++;
// }
for (; i <=n; i++)
{
    /* code */ sum=sum+i;
}



printf("%d",sum);

}