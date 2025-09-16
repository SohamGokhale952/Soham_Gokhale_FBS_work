#include<stdio.h>
void main(){
int start;
printf("enter the start");
scanf("%d",&start);

int end;
printf("enter the end");
scanf("%d",&end);
int sum=0;
for (int i = start; i <=end; i=i+2)
{
    /* code */
    sum+=i;
    
}

printf(" sum is %d",sum);

}