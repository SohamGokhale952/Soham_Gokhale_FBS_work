#include <stdio.h>
#include <string.h>

char* mystrnstr(const char* haystack, const char* needle, int n);

void main() {
    char str[] = "hellostudents";
    char str2[] = "stu";

    char* result = mystrnstr(str, str2, 10);

    if (result != NULL)
        printf("Found at: %s\n", result);
    else
        printf("Not found\n");
}

char* mystrnstr(const char* haystack, const char* needle, int n) {
    int len_needle = strlen(needle);

    if (len_needle == 0)
        return (char*)haystack;

    for (int i = 0; i <= n - len_needle && haystack[i] != '\0'; i++) {
        int j = 0;

        while (j < len_needle && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == len_needle)
            return (char*)(haystack + i);
    }

    return NULL;
}
