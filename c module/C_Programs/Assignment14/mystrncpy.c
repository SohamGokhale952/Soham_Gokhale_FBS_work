#include<stdio.h>
void main(){
void mystrncpy(char* ,char* ,int );
    char str[]="hello";
    char str1[200];
    printf("Enter the no of characters");
    int n;
    scanf("%d",&n);
mystrncpy(str,str1,n);
printf("%s",str1);


}

void mystrncpy(char* str,char* str1,int n)
{


    
int j=0;
while (str[j]!='\0')
{
    for (int i = 0; i < n; i++)
    {
        
   str1[i]=str[i];
    }
   
   j++;
}
str1[j] = '\0';



}