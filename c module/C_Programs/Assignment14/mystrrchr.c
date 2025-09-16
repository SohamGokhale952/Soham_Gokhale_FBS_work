#include<stdio.h>
#include<string.h>
int mystrrchr(char* ,char );
void main(){
char str[]={"hellol"};
char cha='l';

int x= mystrrchr(str,cha);
printf("found at index %d",x);

}



int mystrrchr(char* str,char cha){

for (int i =strlen(str)-1 ; i>=0; i--)
{
   
    if (str[i]==cha)
    {
       return i;
       break;
    }
    
}



}