#include <stdio.h>
#include <string.h>

char *rotateclk(char *);
void rotateanti(char *);

int main() {
    char str1[] = "amazon";
    char str2[] = "onamzo";

    rotateclk(str1);
    rotateclk(str1);

    printf("After clockwise: %s\n", str1);
    if (strcmp(str1, str2) == 0) {
        printf("Matched clockwise\n");
    } else {
        strcpy(str1, "amazon");
        rotateanti(str1);
        rotateanti(str1);

        printf("After anti-clockwise: %s\n", str1);
        if (strcmp(str1, str2) == 0) {
            printf("Matched anti-clockwise\n");
        } else {
            printf("No match in either direction\n");
        }
    }

    return 0;
}

char *rotateclk(char *str1) {
    int len = strlen(str1);
    char last = str1[len - 1];

    for (int i = len - 1; i > 0; i--) {
        str1[i] = str1[i - 1];
    }
    str1[0] = last;
    return str1;
}

void rotateanti(char *str1) {
    int len = strlen(str1);
    char first = str1[0];

    for (int i = 0; i < len - 1; i++) {
        str1[i] = str1[i + 1];
    }
    str1[len - 1] = first;
}
