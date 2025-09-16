#include<stdint.h>
int main(){
    int n=5;
for (int i = 1; i <=n; i++)
{
    /* code */
    for (int j = 1; j <=n; j++)
    {
       if (j<=n-i)
       {
          printf(" ");
       }
       else if(j<=2*i-1)
       {
       printf("*");
       }
       
      
    }
    printf("\n");
    
}




    
}