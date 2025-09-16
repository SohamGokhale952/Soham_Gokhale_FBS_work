#include <stdio.h>
int armstrong();
int main()
{
  int x= armstrong();
  if (x==1)
  {
printf("is armstrong");  }
  
}

int armstrong(){
     int no = 152;
    int count = 0, r1;

    while (no != 0)
    {
        r1 = no % 10;
        count++;
        no = no / 10;
    }
    
    int i = 1, r3 = 1;
    no = 153;
    int sum = 0;
    printf("%d", count);
    while (no != 0)
    {
        /* code */
        r1 = no % 10;
        while (i <= count)
        {
            r3 = r3 * r1;
            i++;
        }
         sum = sum + (r3);
        i=1;r3=1;
       
        no = no / 10;
    }
    no=152;
    if (sum == no)
    {
       return 1;
    }
}