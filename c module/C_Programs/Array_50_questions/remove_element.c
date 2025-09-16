#include <stdio.h>

void main() {
    int arr[5] = {1, 1, 2, 3, 4};
    int k = 0;  

    for (int i = 0; i < 5; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[k] = arr[i];
            k++;              
        }
    }

   
    for (int i = 0; i < k; i++) {
        printf("%d", arr[i]);
    }
}
