#include<stdio.h>

void main(){
int no =121;
int digit ,digit1,digit2,rev,p;
if(no>=100 && no<=999)
{
 digit =no%10;
 p=no/10;
 digit1=p%10;
 digit2=p/10;
rev=digit*100+digit1*10+digit2*1;
if (rev==no)
{
    
    printf("no is pelindrom");
}
else
{
    printf("no is not pelindrom");
}


}

else
{
    printf("NO IS NOT 3 DIGIT");
}

}