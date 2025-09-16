#include<stdio.h>
void myfunction(int** );
void main(){

// char ch;
// char* chr=&ch;
// char** ptrchr=&chr;
// **ptrchr='y';
// printf("%c",**ptrchr);
// printf("%c",*chr);
// printf("%c",ch);


int q=10;
int* p=&q;
int** s=&p;

myfunction(s);

 printf("%d",q);
}

void myfunction(int** s){

**s=100;
}