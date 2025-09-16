#include<stdio.h>
void swap(int*,int*);
void main()
{
int a=10;
int b=20;
printf("%d %d ",a,b);
swap(&a,&b);
printf("%d %d ",a,b);


}

void swap(int*a,int*b){
 int temp =*a;
 *a=*b;
 *b=temp;

}