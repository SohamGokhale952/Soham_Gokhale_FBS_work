#include <stdio.h>

void main()
{
    int arr[] = {1};
    int count = 0;
    int newc = 0;
    int temp=0;
    int flag = 1;
    for (int i = 0; i < 1; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            newc = count;
        }
        else
        {
            temp = newc;
            count = 0;
        }
    }
    if (temp < newc)
    {
        printf("%d", newc);
    }
    else
    {
        printf("%d", temp);
    }
}


//optimised method...


// int findMaxConsecutiveOnes(int* nums, int numsSize) {

//     int count = 0;
//     int temp=0;
//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] == 1) {
//             count++;
//             if(count>temp)
//             {
//                 temp=count;
//             }
//         } else {
//             count = 0;
//         }
//     }
//     return temp;

// }