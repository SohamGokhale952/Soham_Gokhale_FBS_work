#include<stdio.h>
void isdivisible(int);
void main(){
    int no;
printf("Enter the no: ");
scanf("%d",&no);
    isdivisible(no);

}
void isdivisible(int no){
    

if (no%3==0 && no%5==0)
{
    /* code */
    printf("divisible by both");
    
}
else
{
if (no%3==0)
{
printf("no is divisible by 3 not by 5");
}
else if (no%5==0)
{
printf("no is divisible by 5 not by 3");
}
else
{
printf("divisible by none");
}
}




}