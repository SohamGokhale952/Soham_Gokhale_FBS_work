#include <stdio.h>

void main()
{

    int arr[] = {5,6,7};
    int duration = 2;
    int count = duration;
    int count1 = arr[0] + (duration - 1);
    for (int i = 1; i < 3; i++)
    {
        if (count1 >= arr[i])
        {
            count += (arr[i] - arr[i - 1]);
            count1 = arr[i] + (duration - 1);
        }
        else
        {
         count+=duration;
                     count1 = arr[i] + (duration - 1);

        }
    }

    printf("%d",count);
}