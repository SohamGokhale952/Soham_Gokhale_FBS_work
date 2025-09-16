#include <stdio.h>
#include <string.h>
struct admin
{
    int id;
    char name[20];
    int salary;
    int allowance;
};
struct admin getadmin();

void main()
{

    struct admin e1, e2;
    e1=getadmin();
    
    printf("%d\n", e1.id);
    printf("%s\n", e1.name);

    printf("%d\n", e1.salary);
    printf("%d\n", e1.allowance);
}

struct admin getadmin()
{

    struct admin a1;

    a1.id = 10;
    strcpy(a1.name, "abc");
    a1.salary = 1000;
    a1.allowance=23134;
return a1;
}
