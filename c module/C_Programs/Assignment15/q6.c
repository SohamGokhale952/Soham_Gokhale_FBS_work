#include<stdio.h>

void main(){
 printf("Enter the string");
 char str[20];
     scanf("%[^\n]", str);  
char space=' ';
int i=0;
while (str[i]!='\0')
{
   if (str[i]==space)
   {
   str[i]='$';
   }
   i++;
}


printf("%s",str);


}