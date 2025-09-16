// 2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
// these members from user and display them. Also perform addition of two time variables
// and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
// the given time into sec.

#include <stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};
struct time conv(struct time );
void main()
{
struct time t1;
t1=conv(t1);
printf("%d-%d-%d",t1.hr,t1.min,t1.sec);




}


struct time conv(struct time t){

scanf("%d",&t.hr);
scanf("%d",&t.min);
scanf("%d",&t.sec);

int total_sec=t.hr*3600+t.min*60+t.sec;
 t.hr= total_sec/3600;
 t.min=(total_sec%3600)/60;
 t.sec=(total_sec%3600)%60;

 

return t;



}