#include<stdio.h>
void result(int*);
void main(){
      int marks;
printf("Enter the Marks: ");
scanf("%d",&marks);
   result(&marks);

}

void result(int* marks){
   

if (*marks>=40)
{
    if (*marks>75)
    {
        printf("distinction");
    }
    else if (*marks>65)
    {
        printf("First Class");
    }
    else if (*marks>55)
    {
        printf("Second Class");
    }
    else if (*marks>=40)
    {
        printf("Pass Class");
    }
    
    
}

else
{
    printf("Fail");
}


}