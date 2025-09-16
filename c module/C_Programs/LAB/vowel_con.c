#include<stdio.h>
void main(){
 char chara ='x';

if(chara=='a' || chara=='e' || chara=='i'|| chara=='o' || chara=='u'){
printf("is vowel");

}

else if (chara>='a' && chara<='z' )
{
    /* code */
    printf("is consonent");
}
else
{
    printf ("special char");
}

}