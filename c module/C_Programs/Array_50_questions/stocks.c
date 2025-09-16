#include <stdio.h>
void main()
{
    int arr[] = {7,6,4,3,1};
    int min = arr[0];
    int minindex=0;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minindex=i;
        }
    }

    // printf("Minimum element: %d\n", min);
int max=arr[minindex];
    for (int i = minindex+1; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
// printf("%d",max);

int best_time=max-min;
printf("%d",best_time);

}
