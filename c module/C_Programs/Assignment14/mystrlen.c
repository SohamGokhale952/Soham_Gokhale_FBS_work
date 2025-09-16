#include<stdio.h>

void main(){
int mystrlen(char* );
    printf("Enter the string: ");
    char str[20];
    scanf("%s",str);

   int x= mystrlen(str);
   printf("%d",x);

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
