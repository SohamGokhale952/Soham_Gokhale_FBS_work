//find disappeared no

#include <stdio.h>
void main()
{

    int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};
    int k = 0;

    for (int i =1; i <= 8; i++)
    {
        int flag = 1;
        for (int j = 0; j < 8; j++)
        {
            if (arr[j] == i)
            {
                flag = 0;
                break;
            }
        }

        if (flag==1)
        {
           arr[k]=i;
           k++;
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d", arr[i]);
    }
}
// #include <stdio.h>

// void main() {
//     int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};
//     int n = 8;
//     int hash[9] = {0}; // index 0 unused

//     // Mark presence of each number
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] = 1;
//     }

//     // Print numbers that are not marked
//     for (int i = 1; i <= n; i++) {
//         if (hash[i] == 0) {
//             printf("%d ", i);
//         }
//     }
// }
