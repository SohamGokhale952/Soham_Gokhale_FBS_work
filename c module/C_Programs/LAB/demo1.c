#include <stdio.h>
void main()
{
    int arr[4] = {3,2,2,3};
    int n = 4;
    int target = 3;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
           
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;   
            i--;    
    }

}
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
