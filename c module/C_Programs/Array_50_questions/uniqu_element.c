#include <stdio.h>
void main()
{
    int arr[7] = {1, 1, 2, 3, 3, 4, 5};
    int unique[7];
    int k = 0;

    for (int i = 0; i < 7; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[k] = arr[i];
            k++;
        }
    }

    printf("Array without duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
}
