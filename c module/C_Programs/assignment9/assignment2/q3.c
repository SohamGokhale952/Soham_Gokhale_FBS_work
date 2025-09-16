#include<stdio.h>
int calculator();
void main(){
       int a,b;
    char operator;
printf("enter the no : ");
scanf("%d",&a);
printf("enter the no : ");
scanf("%d",&b);
printf("enter the operator : ");
scanf(" %c",&operator);
  int x= calculator(a,b,operator);

printf("%d",x);



}

int calculator(int a,int b,char operator){
  int output;
if (operator=='+')
{
    output=a+b;
return output;
}

else if(operator=='*'){int output;
    output=a*b;
return output;

}
else if(operator=='/'){
    output=a/b;
return output;

}
else if(operator=='-'){
    output=a-b;
return output;

}
else if (operator == '%') {
        if (b == 0) {
            printf("Error: Modulo by zero\n");
        } else {
            output = a % b;
return output;
        }
    }

}