#include <stdio.h>
#include<string.h>
struct admin
{
    int id;
    char name[20];
    int salary;
    int allowance;
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
scanf("%d",&e2.allowance);


printf("\nUSER DEFINE");

printf("\nid: %d",e1.id);
printf("\nname: %s",e1.name);
printf("\nsalary: %d",e1.salary);
printf("\nallowance: %d",e1.allowance);

//
printf("id: %d",e2.id);
printf("\nname: %s",e2.name);
printf("\nsalary: %d",e2.salary);
printf("\nallowance: %d",e2.allowance);


}