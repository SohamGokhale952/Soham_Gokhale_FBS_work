 #include<stdio.h>
 # include <string.h>
 void myrev(char* );
 void swap(char* ,char* );
 void main () {
char str[]="hello";

myrev(str);
printf("%s",str);

 }

void myrev(char* str){

 
    int start=0,end=strlen(str)-1;
    while (start<end)
    {
        swap(&str[start],&str[end]);
      
        start++;
        end--;
         
    }
    

 }

 void swap(char* start,char* end){
    char temp= *start;
    *start=*end;
    *end=temp;
 }