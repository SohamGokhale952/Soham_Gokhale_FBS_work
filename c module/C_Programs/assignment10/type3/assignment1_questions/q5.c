#include <stdio.h>
void getcase(char*);
void main() {
     char c;
    printf("Enter a character: ");
    scanf("%c", &c);
   getcase(&c);
}
void getcase(char* c){
    

    if (*c >= 'a' && *c <= 'z') {
        printf("Character is lowercase");
    } else if (*c >= 'A' && *c <= 'Z') {
        printf("Character is uppercase");
    } else {
        printf("Character is not an alphabet letter");
    }
}