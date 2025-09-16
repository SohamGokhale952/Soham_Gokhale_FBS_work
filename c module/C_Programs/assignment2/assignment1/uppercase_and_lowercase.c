#include <stdio.h>

void main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("Character is lowercase");
    } else if (c >= 'A' && c <= 'Z') {
        printf("Character is uppercase");
    } else {
        printf("Character is not an alphabet letter");
    }
}
