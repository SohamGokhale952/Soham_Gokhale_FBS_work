 #include<stdio.h>
 # include <string.h>
 void myrev(char* );
 void swap(char* ,char* );
 void main () {
char str[]="aba";
char temp[20];
strcpy(temp, str);
myrev(str);
// printf("%s",str);
if (strcmp(temp, str) == 0) {
    printf("is palindrome");
} else {
    printf("not palindrome");
}


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