


#include<stdio.h>
int sum_first_last();
int main(){
  if(sum_first_last())
  {
    printf("%d",sum_first_last());
  }   

}
int  sum_first_last(){
int no=123456;
int temp=no,r1,count=0,first,mid=0,all=0,total;

int last =temp%10;
//     while (temp>=10)
//     {
      
//         temp = temp / 10;
        
//     }
// int sum= temp+last;
// printf("%d",sum);
while (temp!=0)
{
    /* code */


    r1=temp%10;
    all+=r1;
   
    if (temp<10)
    {
        /* code */first=temp;
    }
    else if(count!=0){
        mid+=r1;
    }
count++;
 temp=temp/10;
}
total=all-mid;
return total;}