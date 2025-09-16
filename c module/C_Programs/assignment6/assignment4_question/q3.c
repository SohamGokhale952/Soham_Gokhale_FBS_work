#include<stdio.h>
void perfectno();
int main(){
    perferctno();


}
void perfectno(){
    int no,sum=0;
printf("Enter the end point");
scanf("%d",&no);
int i=1;

for (; i < no;i++ )
{
if (no%i==0)
   {
       /* code */
       sum=sum+i;
   }
   if (sum==no)
{
    /* code */printf("%d is strong no\n",i);
}
   }


// else
// {
//     printf("not perfect no");
// }

}