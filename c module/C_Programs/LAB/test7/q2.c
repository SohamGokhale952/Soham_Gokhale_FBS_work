#include <stdio.h>


void ispalindrome(int* arr, int size);

int main() {
    int arr[5];
    printf("Enter the array\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ispalindrome(arr, 5); 
  
}

void ispalindrome(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            printf("Not a palindrome\n");
            return;
        }
    }
    printf("It is a palindrome\n");
}
