#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "123456";
    char str2[] = "3456";

    int len = strlen(str1);
    int len2 = strlen(str2);
    int index1 = len - 1;
    int index2 = len2 - 1;
    int carry = 0, sum;

    char ans[200];
    int k = 0;

    while (index2 >= 0) {
        sum = (str1[index1] - '0') + (str2[index2] - '0') + carry;
        carry = sum / 10;
        ans[k] = (sum % 10) + '0';
        k++;
        index1--;
        index2--;
    }

    while (index1 >= 0) {
        sum = (str1[index1] - '0') + carry;
        carry = sum / 10;
        ans[k] = (sum % 10) + '0';
        k++;
        index1--;
    }

    if (carry) {
        ans[k] = carry + '0';
        k++;
    }

    ans[k] = '\0';  

    // reverse ans
    for (int i = 0; i < k / 2; i++) {
        char temp = ans[i];
        ans[i] = ans[k - i - 1];
        ans[k - i - 1] = temp;
    }

    printf("Sum = %s\n", ans);
}
