#include <stdio.h>
int getcase();
void main() {
    // int alpha=getcase();
 if (getcase())
 {
printf("lowercase");
 }
 else{
    printf("uppercase");
 }
 
}
int getcase(){
     char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
return 1;
    } else if (c >= 'A' && c <= 'Z') {
return 0;
    } 
    else {
        printf("Character is not an alphabet letter");
    }
}