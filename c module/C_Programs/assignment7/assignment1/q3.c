#include<stdio.h>
int ispelindrome();
void main(){
    if (ispelindrome())
    {
        printf("ispelindrome");
    }
    else
    {
        printf("not pelindrome");
    }
    
    
// ispelindrome();
}//main over

int ispelindrome(){
    int no =214;
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
    
    return 1;
}
else
{
    return 0;
}


}



}//is pelindrome over