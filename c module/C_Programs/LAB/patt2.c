#include<stdio.h>
int main(){
int count =10;

    for (int i = 1; i <=5; i++)
{

for (int j = 1; j <=5; j++)
{
    if (j>i)
    {
        printf(" ");
    }
    else
    {
printf("%d",count--);    }
}
printf("\n");

}
}