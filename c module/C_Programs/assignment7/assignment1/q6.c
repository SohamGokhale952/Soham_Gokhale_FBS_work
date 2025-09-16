
#include<stdio.h>
int geteligibility();
void main(){
    if (geteligibility())
    {
        /* code */printf("eligible");
    }
    else
    {
        printf("not eligible");
    }
    



}
int geteligibility(){
    int age =20;
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