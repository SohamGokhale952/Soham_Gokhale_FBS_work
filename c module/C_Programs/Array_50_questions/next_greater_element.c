#include <stdio.h>
void main()
{

    int arr1[] = {2, 4};
    int arr2[] = {1, 2, 3, 4};
    int ans[10] = {0};
    int k = 0;
    for (int i = 0; i < 2; i++)
    {
        int found = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] == arr2[j])
            {

                while (j + 1 < 4)
                {
                    if (arr2[j + 1] > arr1[i])
                    {
                        ans[k] = arr2[j + 1];
                        k++;
                        found = 1;

                        break;
                    }
                    j++;
                }
                break;
            }
        }
        if (found == 0)
        {
            ans[k] = -1;
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", ans[i]);
    }
}