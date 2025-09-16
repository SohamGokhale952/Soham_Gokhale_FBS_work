#include <stdio.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void findElement(int *arr, int size, int no);

void main() {
    int arr[5];
    int no;

    inputArray(arr, 5);
    displayArray(arr, 5);

    printf("\nEnter the number you want to find: ");
    scanf("%d", &no);

    findElement(arr, 5, no);
}

void inputArray(int *arr, int size) {
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findElement(int *arr, int size, int no) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == no) {
            printf("%d is found at location %d (index starts from 0)\n", no, i);
            found = 1;
            break;  // Stop after first match
        }
    }
    if (!found) {
        printf("%d is not found in the array.\n", no);
    }
}
