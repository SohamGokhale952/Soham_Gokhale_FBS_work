#include<stdio.h>
void factorial(int);

int main(){
    int no=5;
    factorial(no);
}

void factorial(int no){
    int fact=1;
int i=1;
while (i<=no)
{

fact=fact*i;
i++;

    /* code */
}
printf("%d",fact);
}