#include<stdio.h>
int main(){
int h,m,s;
printf("h,m,s");
scanf("%d",&h);
scanf("%d",&m);
scanf("%d",&s);
int total_sec=(h*3600)+(m*60)+s;
printf("total_sec: %d",total_sec);
}