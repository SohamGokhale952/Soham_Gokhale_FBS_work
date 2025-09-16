#include<stdio.h>
int primeno();
int main(){
    int no;
    printf("Enter the no: ");
scanf("%d",&no);
   if(primeno(no)) 
{
     printf("isprimeno");
}
}

int primeno(int no){
    int i=2,flag=1;

while (i<no)
{
    /* code */
    if (no%i==0)
    {
    printf("notprime");
        flag=0;
        break;
    }
    i++;
    
}

if (flag==1)
    {
        /* code */
       return 1;
    }
}