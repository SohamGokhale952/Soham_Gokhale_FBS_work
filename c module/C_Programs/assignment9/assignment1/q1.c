#include<stdio.h>
int even_odd(int);
void main(){
    int no =2;

int x=even_odd(no);
//printf("%d",x);
if (x==1)
{
    printf("%d is even",no);
}
else {
    /* code */    printf("%d is odd",no);

}


}

int even_odd(int no){
return no%2==0;
}