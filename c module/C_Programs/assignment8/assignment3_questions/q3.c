#include<stdio.h>
void printno(int);
void main(){
    printf("enter the no");
    int no;
    scanf("%d",&no);
    printno(no);




}
void printno(int n){
    int i=0;
while (i<=n)
{
    printf("%d",i);
    i++;
}
}