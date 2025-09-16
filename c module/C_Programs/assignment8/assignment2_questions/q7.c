#include<stdio.h>
void triangle(float,float,float);
int main(){
    float side1,side2,side3;
printf("Enter the length of side1: ");
scanf("%f",&side1);
printf("Enter the length of side2: ");
scanf("%f",&side2);
printf("Enter the length of side3: ");
scanf("%f",&side3);
triangle(side1,side2,side3);



}

void triangle(float side1,float side2,float side3){
    
if (side1==side2 && side2==side3)
{
    /* code */printf("tiiangle is equilateral");
}

else if (side1==side2||side2==side3||side1==side3)
{
    /* code */printf("tringle is isosceles");
}

else
{
    printf("tringle is scalene");

}
}