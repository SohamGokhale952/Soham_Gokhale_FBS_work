#include <stdio.h>
int main()
{
    int no;

    printf("Enter the endpoint: ");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        int temp = i;
        int count = 0, r1;
        int num=temp;
        for (; num != 0;)
        {

            r1 = num % 10;
            count++;
             num = num / 10;
        }

        // int i = 1, r3 = 1;
        num = temp;
        // printf("%d", count);

        // no = temp;
        int sum = 0;
        for (; num != 0;)
        {
            int  r3 = 1;

            r1 = num % 10;
            int i=1;
            for (; i <= count;)
            {

                r3 = r3 * r1;
                i++;
            }
            sum = sum + (r3);

            num = num / 10;
        }

        // no = 153;
        if (sum == temp)
        {
            printf("%d isarmstrong\n", temp);
        }
    }
}