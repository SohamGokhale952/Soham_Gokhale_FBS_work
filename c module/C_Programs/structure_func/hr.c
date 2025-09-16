#include <stdio.h>
#include<string.h>
struct hr
{
    int id;
    char name[20];
    int salary;
    int commision;
};
struct hr gethr();
void main()
{

struct hr e2;
e2=gethr();
printf("id: %d",e2.id);
printf("\nname: %s",e2.name);
printf("\nsalary: %d",e2.salary);
printf("\ncommision: %d",e2.commision);



}

  struct hr gethr(){

    struct hr e2;

scanf("%d",&e2.id);
scanf("%s",&e2.name);
scanf("%d",&e2.salary);
scanf("%d",&e2.commision);
return e2;



}