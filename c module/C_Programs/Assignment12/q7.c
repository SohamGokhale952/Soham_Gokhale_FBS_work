#include <stdio.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void sumArrays(int *arr1, int *arr2, int *result, int size);

void main() {
    int arr1[5], arr2[5], temp[5];

    printf("Enter Array 1:\n");
    inputArray(arr1, 5);
    displayArray(arr1, 5);

    printf("Enter Array 2:\n");
    inputArray(arr2, 5);
    displayArray(arr2, 5);

    sumArrays(arr1, arr2, temp, 5);

    printf("Sum of both arrays is:\n");
    displayArray(temp, 5);
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

void sumArrays(int *arr1, int *arr2, int *result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}
