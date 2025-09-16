#include<stdio.h>
#include<string.h>
struct student
{
   int roll;
   char name[20];
   int marks;
};


void main(){


struct student s1,s2,s3;
printf("student1\n");
scanf("%d",&s1.roll);
scanf(" %s",&s1.name); 
scanf("%d",&s1.marks);

printf("Roll: %d",s1.roll);
printf("\nname: %s",s1.name);

printf("\nRoll: %d\n",s1.marks);


printf("student2\n");
scanf("%d",&s2.roll);
scanf(" %s",&s2.name);
scanf("%d",&s2.marks);

printf("Roll: %d",s2.roll);
printf("\nname: %s",s2.name);

printf("\nRoll: %d\n",s2.marks);

printf("student3\n");
scanf("%d",&s3.roll);
scanf(" %s",&s3.name);
scanf("%d",&s3.marks);

printf("Roll: %d",s3.roll);
printf("\nname: %s",s3.name);

printf("\nRoll: %d\n",s3.marks);



}