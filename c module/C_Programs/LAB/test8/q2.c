#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    char temp;
    int start, end;

    printf("Enter a string: ");
    scanf("%s", str);  

    start = 0;
    end= strlen(str) - 1;

   
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
