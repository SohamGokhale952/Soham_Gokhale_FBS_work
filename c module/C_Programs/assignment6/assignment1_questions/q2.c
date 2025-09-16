#include<stdio.h>
int isleap();
void main(){

int x =isleap();
printf("%d",x);
}


int isleap(){

    int year =2001;
// if (year%4==0 && year%100!=0 || year%400==0)
// {
//     /* code */
//     printf("%d leap year",year);
// }
// else
// {
//     /* code */
//         printf("%d not a leap year",year);

// }
return( year%4==0 && year%100!=0 || year%400==0);
}