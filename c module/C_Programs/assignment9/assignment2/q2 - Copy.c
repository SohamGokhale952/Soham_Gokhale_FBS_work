#include <stdio.h>
int era();

void main()
{

    int x= era();
    if (x==1)
    {
        /* code */printf("you RE CHILD");
    }
     else if (x==2)
    {
        /* code */printf("you RE teenager");
    }
     else if (x==3)
    {
        /* code */printf("you RE adult");
    }
else{
    printf("you are old");
}
    
}

int era(){
    int age;
printf("Enter the age: ");
scanf("%d",&age);

if (age<12)
{
return 1;
}
else if (age>=12 && age<=19)
{
return 2;

}
else if(age>=20 && age<=59)
{
return 3;
    /* code */
}
else
{
return 4;

}
}