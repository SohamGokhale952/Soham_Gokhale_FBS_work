#include<stdio.h>
void factorial();

int main(){
    factorial();
}

void factorial(){
    int no=5,fact=1;
int i=1;
while (i<=no)
{

fact=fact*i;
i++;

    /* code */
}
printf("%d",fact);
}