#include<stdio.h>
#include<string.h>

void main(){
    char str[]="hello";
// char temp1[]=str;

char start=str[0];
char end= str[strlen(str)-1];
char temp=start;
start=end;
end=temp;
str[0] = start;
    str[strlen(str)-1] = end;

printf("%s",str);
}