

#include<stdio.h>
int pelindrome();
int main(){
if(pelindrome())
{
printf("is pelindrome");
}
}
int pelindrome(){
    int no = 12321;
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
