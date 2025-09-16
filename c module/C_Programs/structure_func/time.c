#include<stdio.h>
struct time
{
int hour;
int min;
int sec;

};
struct time gettime();
void main(){

struct time d1,d2;

d1.hour=10;
d1.min=12;
d1.sec=2008;

printf(" %d-%d-%d\n",d1.hour,d1.min,d1.sec);


printf("enter the data\n");
d2=gettime();

printf(" %d-%d-%d\n",d2.hour,d2.min,d2.sec);



}
struct time gettime(){
    struct time d2;
scanf("%d",&d2.hour);
scanf("%d",&d2.min);
scanf("%d",&d2.sec);
return d2;
}