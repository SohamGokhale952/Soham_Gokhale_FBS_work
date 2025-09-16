#include<stdio.h>

void main(){
 printf("Enter the string");
 char str[20];
 scanf("%s",str);
 printf("Enter the characyer you want to search");
 char cha;
 scanf(" %c",&cha);

int i=0;
while (str[i]!='\0')
{
   if (str[i]==cha)
   {
    printf("charcyer is present in string at %d",i);
   }
   i++;
}





}