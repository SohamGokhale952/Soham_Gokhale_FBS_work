#include <stdio.h>

void main() {
    char str[] = "abccd";
    char str1[100];
    int k = 0;int count=0; 

    for (int i = 0; str[i] != '\0'; i++) {
        int flag = 0;
count=0;
        for (int j = 0; str[j] != '\0'; j++) {
            if ( str[i] == str[j]) { 
                str1[k++] = str[i]; count++; // ADDING BEFORE BREAKING 
                flag = 1;
                break;
            }
        }

        if (flag == 0&&count=1) { 
            str1[k++] = str[i];  // still adding unique characters
        }
    }

    str1[k] = '\0';
    printf("Characters added: %s\n", str1);
}  what if in this code i keep a count and if count reaches to 0 then dont add in this approach i weas saying