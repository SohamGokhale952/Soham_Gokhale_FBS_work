#include <stdio.h>
#include<stdlib.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void swap(int *a, int *b);
void reverseArray(int *arr, int size);

void main() {
    // int arr[5];
    int*arr=(int*)malloc(sizeof(int)*5);

    printf("Enter the values in array:\n");
    inputArray(arr, 5);

    printf("Original Array:\n");
    displayArray(arr, 5);

    reverseArray(arr, 5);

    printf("Array after reversing:\n");
    displayArray(arr, 5);
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

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int *arr, int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}
