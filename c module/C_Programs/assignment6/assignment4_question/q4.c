#include <stdio.h>
void strongno();
int main()
{
    strongno();
    
}

void strongno(){
    int no;
    printf("Enter the end point: ");
    scanf("%d", &no);


    for (int num = 1; num <= no; num++) 
    {
        int temp = num;
        int r1, sum = 0;

        for (; temp != 0;)  
        {
            r1 = temp % 10;

            int fact = 1;
            int i = 1;
            for (; i <= r1;)  {
                fact = fact * i;
                i++;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d is a Strong number\n", num);
        }
    }

}