#include <stdio.h>
void main()
{

    int arr[7] = {1, 2, 3, 4, 9, 5, 6};

    int flag = 1;
    for (int i = 0; i < 7; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                flag=0;
            }
        }

        if (count >= 2)
        {
            printf("contains duplicate");
        }
    }
    if (flag == 1)
    {

        printf("do not have the duplicates");
    }
}