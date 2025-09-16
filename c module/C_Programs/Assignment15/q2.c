#include<stdio.h>

void main(){
 printf("Enter the string");
 char str[20];
     scanf("%s", str);  

int i=0;
while (str[i]!='\0')
{
   if (str[i]=='a')
   {
   str[i]='$';
   }
   i++;
}


printf("%s",str);


}