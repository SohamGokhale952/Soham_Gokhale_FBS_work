#include <stdio.h>
int salarycalc(float);
void main() {
   float basic;
    printf("Enter the salary :");
    scanf("%f",&basic);
  int salary= salarycalc(basic);
  printf("%d",salary);
}   

int salarycalc(float basic){
    
    float DA,TA,HRA,Total_Salary;
   
if (basic<=5000)
{
    DA  = (10.0 / 100.0) * basic;
TA  = (20.0 / 100.0) * basic;
HRA = (25.0 / 100.0) * basic;

Total_Salary = basic + DA + TA + HRA;
return Total_Salary;
}
else
{
 DA  = (15.0 / 100) * basic;
TA  = (25.0 / 100) * basic;
HRA = (30.0 / 100) * basic;

Total_Salary = basic + DA + TA + HRA;

return Total_Salary;

}

printf("%f is tital salary ",Total_Salary);
}