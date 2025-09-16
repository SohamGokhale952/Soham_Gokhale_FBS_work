#include <stdio.h>
void main()
{

    int nums[] = {4, 9, 5};
    int nums1[] = {9, 4, 9, 8, 4};
   
    for (int i = 0; i < 3; i++)
    {
         int flag = 0;
        for (int j = 0; j < 5; j++)
        {
            if (nums[i] == nums1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d,", nums[i]);
        }
    }
}