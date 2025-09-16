#include<stdio.h>
int main(){
int year;
printf("enter year");
scanf("%d",&year);
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











