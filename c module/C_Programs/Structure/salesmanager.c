#include <stdio.h>
#include<string.h>
struct admin
{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
};
void main()
{

struct admin e1,e2;

e1.id="123";
strcpy(e1.name,"abc");
e1.salary=1234567;
printf("Enter the data\n");

scanf("%d",&e2.id);
scanf("%s",&e2.name);
scanf("%d",&e2.salary);
scanf("%d",&e2.incentive);
scanf("%d",&e2.target);


printf("\nUSER DEFINE");

printf("\nid: %d",e1.id);
printf("\nname:%s",e1.name);
printf("\nsalary: %d",e1.salary);
printf("\nincentive: %d",e1.incentive);

//
printf("id: %d",e2.id);
printf("\nname: %s",e2.name);
printf("\nsalary: %d",e2.salary);
printf("\nincentive: %d",e2.incentive);
printf("\nincentive: %d",e2.target);


}