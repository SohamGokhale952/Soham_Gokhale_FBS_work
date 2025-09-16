#include<stdio.h>
void printno(int*);
void main(){
    printf("enter the no");
    int no;
    scanf("%d",&no);
    printno(&no);




}
void printno(int* no){
    int i=0;
while (i<=*no)
{
    printf("%d",i);
    i++;
}
}