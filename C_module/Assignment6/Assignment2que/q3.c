#include<stdio.h>
void calculator();
void main(){
   calculator();





}

void calculator(){
     int a,b,output;
    char operator;
printf("enter the no : ");
scanf("%d",&a);
printf("enter the no : ");
scanf("%d",&b);
printf("enter the operator : ");
scanf(" %c",&operator);
if (operator=='+')
{
    output=a+b;
    printf("%d",output);
}

else if(operator=='*'){
    output=a*b;
    printf("%d",output);

}
else if(operator=='/'){
    output=a/b;
    printf("%d",output);

}
else if(operator=='-'){
    output=a-b;
    printf("%d",output);

}
else if (operator == '%') {
        if (b == 0) {
            printf("Error: Modulo by zero\n");
        } else {
            output = a % b;
            printf("Result: %d", output);
        }
    }

}