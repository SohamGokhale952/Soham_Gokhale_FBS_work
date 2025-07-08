#include<stdio.h>
void isleap();
void main(){

isleap();

}


void isleap(){

    int year =2000;
if (year%4==0 && year%100!=0 || year%400==0)
{
    /* code */
    printf("%d leap year",year);
}
else
{
    /* code */
        printf("%d not a leap year",year);

}
}