
#include<stdio.h>
void my_nconcat(char* ,char*,int );
void main(){
 char str[]="hello";
 char str2[]="students";

 my_nconcat(str,str2,4);





}

void my_nconcat(char* str,char* str2,int n){

    char str3[200];

    int i=0;
    int j=0;
    while (str[i]!='\0' )
    {
       str3[i]=str[i];
       i++;
    }
     while (j < n && str2[j]!='\0' )
    {
       str3[i]=str2[j];
       i++;
       j++;
    }
    str3[i]='\0';
    printf("Concatinated string: %s\n", str3);


}
