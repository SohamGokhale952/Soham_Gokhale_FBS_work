#include<stdio.h>
int main(){
int i=2,no,flag=1;
printf("Enter the no: ");
scanf("%d",&no);
// while (i<no)
// {
//     /* code */
//     if (no%i==0)
//     {
//     printf("notprime");
//         flag=0;
//         break;
//     }
//     i++;
    
// }
for (; i < no; i++)
{
    /* code */
    if (no%i==0)
    {
    printf("notprime");
        flag=0;
        break;
    }
}


if (flag==1)
    {
        /* code */
        printf("isprimeno");
    }
}