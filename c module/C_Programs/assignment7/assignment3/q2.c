#include<stdio.h>
int factorial();

int main(){
   int x= factorial();
   printf("%d is factorial.",x);
}

int factorial(){
    int no=5,fact=1;
int i=1;
while (i<=no)
{

fact=fact*i;
i++;

    /* code */
}
return fact;
}