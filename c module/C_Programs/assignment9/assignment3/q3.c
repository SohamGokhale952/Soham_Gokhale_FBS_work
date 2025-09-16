#include<stdio.h>
int printno(int);
void main(){
        int i=0;

   int x= printno(i);
printf("%d",x);



}
int printno(int i){
while (i<=10)
{
    printf("%d",i);

    i++;
   
}
 return i;
}

//this code will not work because its returning multiple values