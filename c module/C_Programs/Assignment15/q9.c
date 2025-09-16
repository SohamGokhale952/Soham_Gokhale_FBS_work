#include<stdio.h>

void main(){
int mystrlen(char* );
    printf("Enter the string1: ");
    char str[20];
    scanf("%s",str);
     printf("Enter the string2: ");
    char str1[20];
    scanf("%s",str1);

   int x= mystrlen(str);
   int y= mystrlen(str1);

   if (x>y)
   {
 printf("string 1 is greater");   }
   else{
   printf("string2 is greater");
   }
}

  int mystrlen(char* str){
int count=0;

int i=0;
while (str[i]!='\0')
{
    count++;
   i++;
}
return count;

  }
