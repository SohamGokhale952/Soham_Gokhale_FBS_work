#include <stdio.h>
#include <math.h>

int armstrong(int no);

int main() {
    int no = 152;
    int x = armstrong(no);

    if (x == 1) {
        printf("%d is an Armstrong number.\n", no);
    } else {
        printf("%d is NOT an Armstrong number.\n", no);
    }
}

int armstrong(int no) {
    int original = no;
    int count = 0, temp = no;

    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    int sum = 0, r1;
    temp = no;
    while (temp != 0) {
        r1 = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= r1;
        }
        sum += power;
        temp = temp / 10;
    }

    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}
