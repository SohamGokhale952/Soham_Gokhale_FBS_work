#include<stdio.h>
#include<string.h>
struct student
{
   int roll;
   char name[20];
   int marks;
};
struct student getstud();

void main(){


struct student s1;

s1=getstud();
printf("Roll: %d",s1.roll);
printf("\nname: %s",s1.name);

printf("\nRoll: %d",s1.marks);





}
struct student getstud(){
   struct student s1;

s1.roll=123;
strcpy(s1.name,"Soham");
s1.marks=97;
return s1;
}