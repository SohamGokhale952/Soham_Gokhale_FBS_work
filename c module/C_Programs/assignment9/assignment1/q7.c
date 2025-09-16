#include <stdio.h>

int isvowel(char c);

int main() {
    char c;
    printf("Enter the character: ");
    scanf(" %c", &c);  // Notice the space before %c to handle newline issues

    if (isvowel(c)) {
        printf("Character is a vowel.\n");
    } else {
        printf("Character is not a vowel.\n");
    }
}

int isvowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    } else {
        return 0;
    }
}
