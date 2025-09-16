#include<stdio.h>
void main(){
    int no=4;
    int flag=1;

    for (int i = 2; i <no; i++)
    {
        /* code */
        if (no%i==0)
        {
            /* code */
            flag=0;
            printf("notprime");
            break;
        }
        
    }
    if(flag==1)
    {
printf("isprime");
    }
    
}