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
struct admin getsales();

void main()
{

struct admin e1,e2;




e2=getsales();
printf("id: %d",e2.id);
printf("\nname: %s",e2.name);
printf("\nsalary: %d",e2.salary);
printf("\nincentive: %d",e2.incentive);
printf("\nincentive: %d",e2.target);


}
struct admin getsales(){
    struct admin e2;

scanf("%d",&e2.id);
scanf("%s",&e2.name);
scanf("%d",&e2.salary);
scanf("%d",&e2.incentive);
scanf("%d",&e2.target);
return e2;
}