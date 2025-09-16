#include <stdio.h>
#include <ctype.h>  

int mystrcasecmp(char* str, char* str1) {
    int i = 0;
    while (str[i] != '\0' && str1[i] != '\0') {
        if (tolower(str[i]) != tolower(str1[i])) {
            return tolower(str[i]) - tolower(str1[i]);
        }
        i++;
    }

    return tolower(str[i]) - tolower(str1[i]);
}

void main() {
    char str[] = "hello";
    char str1[] = "hEllo";

    int result = mystrcasecmp(str, str1);

    printf("%d\n", result);  
}
