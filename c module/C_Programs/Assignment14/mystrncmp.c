#include <stdio.h>

int my_strncmp(char* str1, char* str2, int n); 

void main() {
    char str1[] = "hello";
    char str2[] = "hell";

    int x = my_strncmp(str1, str2, 4);

    if (x == 0) {
        printf("strings are matched");
    } else {
        printf("strings are not matched");
    }
}

int my_strncmp(char* str1, char* str2, int n) {
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    if (i == n) {
        return 0;
    }

    return str1[i] - str2[i];  
}
