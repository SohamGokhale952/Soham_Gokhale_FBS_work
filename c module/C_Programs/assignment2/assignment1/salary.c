#include <stdio.h>

void main() {
    float basic;
    float DA,TA,HRA,Total_Salary;
    printf("Enter the salary :");
    scanf("%f",&basic);
if (basic<=5000)
{
    DA  = (10.0 / 100.0) * basic;
TA  = (20.0 / 100.0) * basic;
HRA = (25.0 / 100.0) * basic;

Total_Salary = basic + DA + TA + HRA;
}
else
{
 DA  = (15.0 / 100) * basic;
TA  = (25.0 / 100) * basic;
HRA = (30.0 / 100) * basic;

Total_Salary = basic + DA + TA + HRA;


}

printf("%f is tital salary ",Total_Salary);
}