#include<stdio.h>
void isvowel();
void main(){
   
isvowel();


}

void isvowel(){
     char c, a,e,i,o,u,A,E,I,O,U;
printf("enter the character");
scanf("%c",&c);
printf("%c",c);     

if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
printf("CHARACTER IS VOWEL");
}
else
{
printf("CHARACTER IS NOT VOWEL");
}
}