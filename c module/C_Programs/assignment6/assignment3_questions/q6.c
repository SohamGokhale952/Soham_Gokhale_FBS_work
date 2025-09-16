#include<stdio.h>
void primeno();
int main(){
    primeno();

}

void primeno(){
    int i=2,no,flag=1;
printf("Enter the no: ");
scanf("%d",&no);
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
        printf("isprimeno");
    }
}