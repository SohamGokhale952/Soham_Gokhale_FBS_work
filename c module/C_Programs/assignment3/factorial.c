#include<stdio.h>
int main(){
int no=5,fact=1;
// int i=1;
// while (i<=no)
// {

// fact=fact*i;
// i++;

//     /* code */
// }

for (int i = 1; i <= no; i++)
{
fact=fact*i;
}

printf("%d",fact);

}