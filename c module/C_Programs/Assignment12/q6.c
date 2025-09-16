#include <stdio.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void checkPrimes(int *arr, int size);

void main() {
    int arr[5];

    inputArray(arr, 5);
    displayArray(arr, 5);
    checkPrimes(arr, 5);
}

void inputArray(int *arr, int size) {
    printf("Enter %d array elements:\n", size);
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

void checkPrimes(int *arr, int size) {
    printf("Prime numbers in the array are:\n");
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int flag = 0;

        if (num <= 1) {
            continue;
        }

        for (int j = 2; j <= num / 2; j++) {
            if (num % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d is prime\n", num);
        }
    }
}
