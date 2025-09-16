
#include<stdio.h>
void mul(int*);
int main(){
      int n;
printf("enter the no: ");
scanf("%d",&n);
    mul(&n);

}
void mul(int* n){
  int mul;
int i=1;
while(i<=10)
{
 mul=i* *n;
printf("%d\n",mul);
i++;
}
}