#include <stdio.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void findMaxMin(int *arr, int size, int *max, int *min);

void main() {
    int arr[5];
    int max, min;

    inputArray(arr, 5);
    displayArray(arr, 5);
    findMaxMin(arr, 5, &max, &min);

    printf("%d is maximum\n", max);
    printf("%d is minimum\n", min);
}

void inputArray(int *arr, int size) {
    printf("Enter the values in array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

void findMaxMin(int *arr, int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
