#include <stdio.h>

void main() {
    int n = 6;
    int arr[] = {1, 2, 1, 2, 1, 4};

    int dup[10];  // to store already printed elements
    int k = 0;    // index for dup[]

    for (int i = 0; i < n; i++) {
        // Check if already counted
        int already_counted = 0;
        for (int x = 0; x < k; x++) {
            if (dup[x] == arr[i]) {
                already_counted = 1;
                break;
            }
        }

        if (already_counted == 1) {
            continue;  // Skip this number
        }

        // Count frequency
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        printf("%d -> %d\n", arr[i], count);

        // Add to dup[]
        dup[k] = arr[i];
        k++;
    }
}
