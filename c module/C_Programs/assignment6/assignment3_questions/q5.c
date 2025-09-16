
#include<stdio.h>
void perfectno();
int main(){
    perfectno();



}
void perfectno(){
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
    /* code */printf("is strong no");
}
else
{
    printf("not perfect no");
}
}