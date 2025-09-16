#include <stdio.h>
int main()
{
    int no = 153;
    int count = 0, r1;

    // while (no != 0)
    // {
    //     r1 = no % 10;
    //     count++;
    //     no = no / 10;
    // }
    for (; no != 0;)
    {
        /* code */
        r1 = no % 10;
        count++;
        no = no / 10;
    }

    int i = 1, r3 = 1;
    no = 153;
    // int sum = 0;
    printf("%d", count);
    // while (no != 0)
    // {

    //     r1 = no % 10;
    //     while (i <= count)
    //     {
    //         r3 = r3 * r1;
    //         i++;
    //     }
    //      sum = sum + (r3);
    //     i=1;r3=1;

    //     no = no / 10;
    // }
    no=153;
    int sum = 0;
    for (; no != 0;)
    {
            int i = 1, r3 = 1;

        /* code */
        r1 = no % 10;
        for (; i <= count;)
        {
            /* code */
            r3 = r3 * r1;
            i++;
        }
        sum = sum + (r3);
       
        no = no / 10;
    }

    no = 153;
    if (sum == no)
    {
        printf("isarmstrong");
    }
}