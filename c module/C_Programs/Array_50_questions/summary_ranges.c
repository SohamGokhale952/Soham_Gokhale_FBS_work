#include <stdio.h>

void main()
{
    int arr[6] = {0, 1, 2, 4, 5, 7};

    int i = 0;
    while (i < 6)
    {
        int start = arr[i];
        int j = i;

        while (j + 1 < 6 && arr[j + 1] == arr[j] + 1)
        {
            j++;
        }

        int end = arr[j];
        printf("%d->%d, ", start, end);

        i = j + 1;
    }
}
