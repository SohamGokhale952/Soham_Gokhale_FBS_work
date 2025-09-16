#include<stdio.h>
void isleap(int);
void main(){
    int year =2001;

isleap(year);

}


void isleap(int year){

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