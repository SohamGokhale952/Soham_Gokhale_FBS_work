
#include<stdio.h>
int perfectno();
int main(){
    if(perfectno())
    {
        printf("is perfect no");
    }



}
int perfectno(){
    int no=28,sum=0;
int i=1;
while (i<28)
{
    /* code */
    if (no%i==0)
    {
        /* code */
        sum=sum+i;
    }
    i++;
}
if (sum==no)
{
return 1;}
else
{
return 0;}
}