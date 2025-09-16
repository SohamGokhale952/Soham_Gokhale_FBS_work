#include<stdint.h>
int main(){
    int count=1;
for (int i = 1; i <=5; i++)
{
    /* code */
    for (int j = 1; j <=5; j++)
    {
        /* code */
        if (i>j)
        {
        printf("%d",count);
        count++;
        }
        else{
        printf(" ");
        }
    }
    printf("\n");
    
}




    
}