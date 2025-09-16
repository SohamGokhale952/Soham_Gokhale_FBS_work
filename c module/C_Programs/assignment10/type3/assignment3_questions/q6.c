#include<stdio.h>
void primeno(int*);
int main(){
    int no;
    printf("Enter the no: ");
scanf("%d",&no);
    primeno(&no);

}

void primeno(int* no){
    int i=2,flag=1;

while (i<*no)
{
    /* code */
    if (*no%i==0)
    {
    printf("notprime");
        flag=0;
        break;
    }
    i++;
    
}

if (flag==1)
    {
        /* code */
        printf("isprimeno");
    }
}