#include<stdio.h>
int factorial(int);

int main(){
    int no=5;
   int x= factorial(no);
   printf("%d is factorial.",x);
}

int factorial(int no){
    int fact=1;
int i=1;
while (i<=no)
{

fact=fact*i;
i++;

    /* code */
}
return fact;
}