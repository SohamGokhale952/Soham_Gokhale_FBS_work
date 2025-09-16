#include <stdio.h>
 struct Employee  getinfo();
struct Employee
{
    int id;
    char name[20];
    int salary;
};
void main()
{

    struct Employee e1, e2;


   e1= getinfo();

    printf("id: %d", e1.id);
    printf("\nname: %s", e1.name);

    printf("\nsalary: %d", e1.salary);

}

 struct Employee  getinfo()
{
    struct Employee e1;

    scanf("%d", &e1.id);
    scanf("%s", &e1.name);
    scanf("%d", &e1.salary);
    return e1;
}