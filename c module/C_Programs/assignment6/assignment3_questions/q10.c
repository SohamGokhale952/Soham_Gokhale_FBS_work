
#include<stdio.h>
void mul();
int main(){
    mul();

}
void mul(){
    int n,mul;
printf("enter the no: ");
scanf("%d",&n);
int i=1;
while(i<=10)
{
 mul=i*n;
printf("%d\n",mul);
i++;
}
}