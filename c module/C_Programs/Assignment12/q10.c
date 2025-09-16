#include <stdio.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void sortArray(int *arr, int size);

int main() {
    int arr[5];

    printf("Enter values in the array:\n");
    inputArray(arr, 5);

    printf("Original Array:\n");
    displayArray(arr, 5);

    sortArray(arr, 5);

    printf("Sorted Array in Ascending Order:\n");
    displayArray(arr, 5);

    return 0;
}

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
