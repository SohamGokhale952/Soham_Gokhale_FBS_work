#include<stdint.h>
int main(){
    int n=5;
for (int i = 1; i <=5; i++)
{
    /* code */
    for (int j = 1; j <=5; j++)
    {
        /* code */
        if (j<=n-i+1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
        
    }
    printf("\n");
    
}




    
}