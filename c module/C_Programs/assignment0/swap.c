#include<stdio.h>
int main(){
  int a=20;
  int b=30;
  printf("Before swap a is %d ",a);  
  printf("Before swap b is %d",b);  
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("After swap a is %d",a);  
  printf("After swap b is %d",b);  
}