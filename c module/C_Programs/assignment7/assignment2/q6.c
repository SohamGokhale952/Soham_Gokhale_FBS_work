#include<stdio.h>
int result();
void main(){
   int x =result();
if (x==1)
{
    /* code */printf("distinction");
}
else if (x==2)
{
    /* code */printf("first class");
}
else if (x==3)
{
    /* code */printf("second class");
}
else if (x==4)
{
    /* code */printf("pass class");
}
else
{
    /* code */printf("fail");
}

}

int result(){
     int marks;
printf("Enter the Marks: ");
scanf("%d",&marks);

if (marks>=40)
{
    if (marks>75)
    {
return 1;    }
    else if (marks>65)
    {
return 2;     }
    else if (marks>55)
    {
return 3;     }
    else if (marks>=40)
    {
return 4;     }
    
    
}

else
{
return 5; }


}