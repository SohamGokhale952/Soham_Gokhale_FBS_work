// // remove the element

// #include <stdio.h>
// void main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int target = 5;
//     int index = 0;

//     for (int i = 0; i < 7; i++)
//     {

//         if (arr[i] == target)
//         {
//             index = i;
//         }

//     }
//     for (int j = index; j < 6; j++)
//         {
//             arr[j] = arr[j + 1];
//         }
//       for (int i = 0; i < 6; i++)
//       {
// printf("%d",arr[i]);      }

// }

// #include<stdio.h>
// void main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//   int target = 5;
// int index=0;
// for (int i = 0; i <7; i++)
// {
//   if (arr[i]!=target)
//   {
//     arr[index]=arr[i];
//     index++;
//   }

// }
//  for (int i = 0; i < 6; i++)
//       {
//  printf("%d",arr[i]);      }

// }

// menu driven for crud
#include <stdio.h>

void inputArray(int *arr, int size);
void displayArray(int *arr, int size);
void searchElement(int *arr, int size);
void removeElement(int *arr, int *size);
void addElement(int *arr, int *size);

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[100]; // Fixed max size

    inputArray(arr, size);

    int choice;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Search Element\n");
        printf("3. Remove Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                searchElement(arr, size);
                break;
            case 3:
                removeElement(arr, &size);
                break;
            
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void inputArray(int *arr, int size) {
    printf("Enter the values in array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchElement(int *arr, int size) {
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

void removeElement(int *arr, int *size) {
    int element, index = -1;
    printf("Enter the number you want to remove: ");
    scanf("%d", &element);

    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int j = index; j < *size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        (*size)--;
        printf("Element removed.\n");
    } else {
        printf("Element not found.\n");
    }
}


