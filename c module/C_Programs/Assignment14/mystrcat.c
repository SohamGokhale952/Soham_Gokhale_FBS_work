
#include<stdio.h>
void my_concat(char* ,char* );
void main(){
 char str[]="hello";
 char str2[]="students";

 my_concat(str,str2);





}

void my_concat(char* str,char* str2){

    char str3[200];

    int i=0;
    int j=0;
    while (str[i]!='\0' )
    {
       str3[i]=str[i];
       i++;
    }
     while (str2[j]!='\0' )
    {
       str3[i]=str2[j];
       i++;
       j++;
    }
    str3[i]='\0';
    printf("Concatinated string: %s\n", str3);


}
