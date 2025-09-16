

#include<stdio.h>

void main(){

char str[]="ABC";

 tolowerr(str);
printf("%s",str);

}

void tolowerr(char* str){

char str1[15];

for (int i = 0; str[i] != '\0'; i++)
{
   str1[i]=str[i]-32;
}

// return str1;
}
