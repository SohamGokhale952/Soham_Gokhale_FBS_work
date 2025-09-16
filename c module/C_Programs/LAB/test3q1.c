#include<stdio.h>
void main(){
int start;
printf("enter the start");
scanf("%d",&start);

int end;
printf("enter the end");
scanf("%d",&end);

for (int i = start; i <=end; i++)
{
    /* code */
    if (i%2==0)
    {
        printf("%d is even  %\n",i);
    }
    
}
for (int j = start; j <=end; j++)
{
    /* code */
     if(j%2!=0) 
    {
        printf(" %d is odd \n",j);
    }
    
}





}