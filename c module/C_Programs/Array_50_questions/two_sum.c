#include <stdio.h>
void main()
{

    int arr[] = {1, 2, 4, 6, 18, 25};
    int target = 10;

    int i = 0;
    int j = 5;
    while (i <=j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("%d + %d = %d",arr[i],arr[j],target);
            break;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}