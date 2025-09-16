#include <stdio.h>
void main()
{

    int arr[4] = {3, 0, 1};
    int sum = 0;
    int sum1=0;
    for (int i = 0; i < 4; i++)
    {

        sum += i;
    }
    printf("%d",sum);
    for (int i = 0; i < 4; i++)
    {

        sum1 += arr[i];
    }
        printf("%d",sum1);

 int missing_no=sum-sum1;
 printf("%d",missing_no);

}