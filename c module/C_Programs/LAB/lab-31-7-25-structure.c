#include <stdio.h>

typedef struct Employee
{
    char name[20];
    int salary;
    int id;
} Employee;

void main()
{
    
    Employee sarr[2];
    store(sarr, 2);
    display(sarr, 2);

    int target;
    printf("Enter the target\n");
    scanf("%d", &target);
    foundid(sarr, target);

    int target1;
    printf("Enter the target\n");
    scanf("%d", &target1);
    int ele=deletemp(sarr, 2, target1);

    display(sarr, ele);
}

void foundid(Employee *sarr, int target)
{

    int found = 0;
    for (int i = 0; i < 2; i++)
    {
        if (sarr[i].id == target)
        {
            printf("Name of the employee is: %s\n", sarr[i].name);
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}

store(Employee *sarr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the id: \n");
        scanf("%d", &sarr[i].id);

        printf("Enter the name: \n");
        scanf(" %s", sarr[i].name);

        printf("Enter the salary: \n");
        scanf("%d", &sarr[i].salary);
    }
}

display(Employee *sarr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Id is: %d\n", sarr[i].id);
        printf("Name is: %s\n", sarr[i].name);
        printf("Salary is: %d\n", sarr[i].salary);
    }
}

deletemp(Employee *sarr, int size, int target)
{
    int k = 0;
    int flag = 0;

    for (int i = 0; i < size; i++)
    {

        if (sarr[i].id != target)
        {
            sarr[k] = sarr[i];
            k++;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag)
        printf("Employee with ID %d deleted successfully.\n", target);
    else
        printf("Employee with ID %d not found.\n", target);
    return k;
}