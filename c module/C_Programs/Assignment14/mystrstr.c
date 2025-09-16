
#include <stdio.h>

char* my_strstr(char*, char*);

int main() {
    char str[] = "hellostudents";
    char str2[] = "shrava";

    char* result = my_strstr(str, str2);

    if (result == NULL) {
        printf("Substring not found.\n");
    }

    return 0;
}

char* my_strstr(char* str, char* str2) {
    if (str == NULL || str2 == NULL) {
        return NULL;
    }

    char* p1 = str;        
    char* p2;

    char* p1_start;

    while (*p1 != '\0') {
        p2 = str2;
        p1_start = p1;

        while (*p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            printf("found at %s\n", p1_start);
            return p1_start;
        }

        p1 = p1_start + 1;
    }

    return NULL;  
 }