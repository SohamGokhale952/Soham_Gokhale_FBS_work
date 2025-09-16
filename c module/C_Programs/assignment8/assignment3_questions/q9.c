#include<stdio.h>
void sum();
int main(){
    int i,n;
printf("Enter the start point: ");
scanf("%d",&i);
printf("Enter the endpoint: ");
scanf("%d",&n);
    sum(i,n);


}
void sum(int i,int n){
    int sum=0;
while (i<=n)
{
    /* code */
    sum=sum+i;
    
    i++;
}


printf("%d",sum);
}