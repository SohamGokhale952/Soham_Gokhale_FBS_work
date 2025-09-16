#include<stdio.h>

void mystrcpy(char* ,char* );
void main(){

    char str[]="hello";
    char str2[20];

    mystrcpy(str,str2);

    printf("%s",str2);


}

void mystrcpy(char* str,char* str2){

int i=0;
while (str[i]!='\0')
{
   str2[i]=str[i];
   i++;
}
str2[i] = '\0';




}