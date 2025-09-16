
#include<stdio.h>
void toupperr(char* );
void main(){

char str[]="abc";

toupperr(str);
printf("%s",str);

}

void toupperr(char* str){



for (int i = 0; str[i] != '\0'; i++)
{
   str[i]=str[i]-32;
}


}

