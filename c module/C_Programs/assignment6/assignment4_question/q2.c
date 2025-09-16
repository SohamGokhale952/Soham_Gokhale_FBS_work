#include<stdio.h>
void primeno();
int main(){
    primeno();




}


void primeno(){
    int i=2, end,flag=1;
printf("Enter the end: ");
scanf("%d",&end);

for (; i <= end; i++)
{
    flag=1;
    /* code */
    for (int j = 2; j < i; j++)
    {
 if (i%j==0)
    {
   
        flag=0;
        break;
    }    }
    
   if (flag==1)
    {
        /* code */
        printf("%d isprimeno\n",i);
    }
}
}