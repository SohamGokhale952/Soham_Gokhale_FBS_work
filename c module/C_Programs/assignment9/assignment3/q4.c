

#include<stdio.h>
int pelindrome(int);
int main(){
     int no = 12321;
if(pelindrome(no))
{
printf("is pelindrome");
}
}
int pelindrome(int no){
   
int temp=no;
    int r1,r3=0;

    while (temp != 0)
    {
        r1 = temp % 10;
        r3=r3*10+r1;
        temp = temp / 10;
    }
printf("%d ",r3);
if(no==r3){
return 1;}
}
