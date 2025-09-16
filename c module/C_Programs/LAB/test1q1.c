#include<stdio.h>
int main(){
    // printf("first input should be another one");2
int h,m,s;
printf("h,m,s");
scanf("%d",&h);
scanf("%d",&m);
scanf("%d",&s);
int t1=(h*3600+m*60+s);
int h1,m1,s1;
printf("h1,m1,s1");
scanf("%d",&h1);
scanf("%d",&m1);
scanf("%d",&s1);
int t2=(h1*3600+m1*60+s1);
if (t1>t2)
    printf("t1 is greater");
else
    printf("t2 is greater");    
{
    /* code */
}

if (t1>t2)  
{
    /* code */
    int hdiff=(h-h1);
 int mdiff=(m-m1);
 int sdiff=s-s1;
printf("difference is: %d hr %d min %dsec",hdiff,mdiff,sdiff);
// printf("difference: %d",difference);
}
else
{
    int h1diff=(h1-h);
 int m1diff=(m1-m);
 int s1diff=s1-s;
printf("difference is: %d hr %d min %dsec",h1diff,m1diff,s1diff);
}


 
}