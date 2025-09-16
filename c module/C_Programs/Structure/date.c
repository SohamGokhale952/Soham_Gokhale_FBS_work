#include<stdio.h>
struct date
{
int day;
int month;
int year;

};

void main(){

struct date d1,d2;

d1.day=10;
d1.month=12;
d1.year=2008;

printf(" %d/ %d/ %d\n",d1.day,d1.month,d1.year);


printf("enter the data\n");

scanf("%d",&d2.day);
scanf("%d",&d2.month);
scanf("%d",&d2.year);

printf(" %d/ %d/ %d\n",d2.day,d2.month,d2.year);



}