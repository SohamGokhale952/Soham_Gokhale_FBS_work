#include <stdio.h>
void era();

void main()
{

    era();
}

void era(){
    int age;
printf("Enter the age: ");
scanf("%d",&age);

if (age<12)
{
    printf("You are child");
}
else if (age>=12 && age<=19)
{
        printf("You are teenager");

}
else if(age>=20 && age<=59)
{
    printf("You are Adult");
    /* code */
}
else
{
        printf("You are Senior");

}
}