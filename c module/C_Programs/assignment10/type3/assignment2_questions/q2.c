#include <stdio.h>
void era(int*);

void main()
{
     int age;
printf("Enter the age: ");
scanf("%d",&age);

    era(&age);
}

void era(int* age){
   

if (*age<12)
{
    printf("You are child");
}
else if (*age>=12 && *age<=19)
{
        printf("You are teenager");

}
else if(*age>=20 && *age<=59)
{
    printf("You are Adult");
    /* code */
}
else
{
        printf("You are Senior");

}
}