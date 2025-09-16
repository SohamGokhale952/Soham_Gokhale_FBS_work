#include <stdio.h>
void main()
{

    int arr[7] = {2, 1, 1, 1, 1, 1, 2};
   
   
    for (int i = 1; i < 7; i++)
    { int count = 0;
        for (int j = 0; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 7 / 2)
        {
            printf("%d", arr[i]);
        }
    }
}