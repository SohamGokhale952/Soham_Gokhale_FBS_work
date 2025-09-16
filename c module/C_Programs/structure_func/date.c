#include<stdio.h>
struct date getdate();
struct date
{
int day;
int month;
int year;

};

void main(){

struct date d1,d2;




printf("enter the data\n");


d1 =getdate();
printf(" %d/ %d/ %d\n",d1.day,d1.month,d1.year);

}

struct date getdate(){
    struct date d1;

d1.day=10;
d1.month=12;
d1.year=2008;
return d1 ;
}