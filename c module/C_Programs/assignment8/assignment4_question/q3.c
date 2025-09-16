#include<stdio.h>
void perfectno(int);
int main(){
     int no;
printf("Enter the end point");
scanf("%d",&no);
    perferctno(no);


}
void perfectno(int no){
   int sum=0;
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