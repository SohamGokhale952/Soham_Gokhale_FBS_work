
#include<stdio.h>
int geteligibility(int);
void main(){
        int age =20;

    if (geteligibility(age))
    {
        /* code */printf("eligible");
    }
    else
    {
        printf("not eligible");
    }
    



}
int geteligibility(int age){
// if (age>=18)
// {
//     /* code */
//     printf(" eligible");
// }
// else
// {
//     /* code */
//         printf("not eligibl");

// }
return age>=18;
}