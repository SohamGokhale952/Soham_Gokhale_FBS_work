#include<stdio.h>
void main(){
int a,b;
printf("enter the no ");
scanf("%d",&a);
printf("enter second no ");
scanf("%d",&b);

if (a>b)
{
    /* code */
    printf("a is greater than b");
}
// else if (a==b)
// {
//     /* code */
//         printf("a is equal to  b");

// }

else
{
    /* code */
        if (a==b)
        {
            /* code */
            printf("equal");
        }
        else{
            printf("b is greater than a");
        }

}


}