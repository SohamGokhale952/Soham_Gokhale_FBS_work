#include<stdio.h>

void main(){
 char str[100];
int i = 0, count = 0;

scanf(" %[^\n]", str);

while (str[i] != '\0') {
    if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
        count++;
    }
    i++;
}

printf("%d",count);

}