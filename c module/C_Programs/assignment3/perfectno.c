#include<stdio.h>
int main(){
int no=6,sum=0;
int i=1;
// while (i<no)
// {
//     /* code */
//     if (no%i==0)
//     {
//         /* code */
//         sum=sum+i;
//     }
//     i++;
// }
for (; i < no;i++ )
{
if (no%i==0)
   {
       /* code */
       sum=sum+i;
   }
   }

if (sum==no)
{
    /* code */printf("is strong no");
}
else
{
    printf("not perfect no");
}


}