#include<stdio.h>
#include<string.h>
void main(){
int pass=1234;
char user[10] ="abcd";

printf("Enter the username: \n");
char user1[10];
scanf(" %s",user1);

printf("Enter the password: \n");
int pass1;
scanf("%d",&pass1);


if (strcmp(user1, user) == 0&&pass1==pass)
{
printf("login successfull\n");
int rand_no=pass+12345;
printf("the no is %d ",rand_no);
printf("Enter the displayed no: \n");
int user_rand;
scanf("%d",&user_rand);
if (rand_no==user_rand)
{
  printf("successfull");
}
else
{
    printf("failed");
}


}

else
{
    printf("invalid");
}








}


