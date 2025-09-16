
#include<stdio.h>
void mul(int);
int main(){
    int n;
    mul(n);

}
void mul(int n){
    int mul;
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