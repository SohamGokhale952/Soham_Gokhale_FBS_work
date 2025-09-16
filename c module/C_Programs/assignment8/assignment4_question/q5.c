#include <stdio.h>
void choise(int,int);
int main() {
    int num, choice;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Choose an option:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    choise(num,choice);
    
  
}
void choise(int num,int choice){
    

    if (choice == 1) {
        if (num % 2 == 0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    }

    else if (choice == 2) {
        int i, flag = 1;
        if (num <= 1)
            flag = 0;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d is Prime\n", num);
        else
            printf("%d is Not Prime\n", num);
    }

    else if (choice == 3) {
        int temp = num, rev = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == num)
            printf("%d is a Palindrome\n", num);
        else
            printf("%d is Not a Palindrome\n", num);
    }

    else if (choice == 4) {
        if (num > 0)
            printf("%d is Positive\n", num);
        else if (num < 0)
            printf("%d is Negative\n", num);
        else
            printf("Number is Zero\n");
    }

    else if (choice == 5) {
        int temp = num, rev = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("Reversed Number = %d\n", rev);
    }

    else if (choice == 6) {
        int temp = num, sum = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of digits = %d\n", sum);
    }

}