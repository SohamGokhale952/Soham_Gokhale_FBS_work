#include<stdio.h>
#include<string.h>
void main(){
 printf("Enter the string");
 char str[20];
     scanf("%s", str);  

     printf("Enter the index you want to remove");
     int index;
     scanf("%d",&index);

int i=index;

while (i<strlen(str))
{
  
  
  str[i]= str[i+1];
   
   i++;
}


printf("%s",str);


}