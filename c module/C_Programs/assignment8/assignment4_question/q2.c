#include<stdio.h>
void primeno(int);
int main(){
    int end;
    printf("Enter the end: ");
scanf("%d",&end);
    primeno(end);




}


void primeno(int end){
    int i=2,flag=1;


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