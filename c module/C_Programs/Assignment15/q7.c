#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter the string");
    char str[20];
    scanf("%s", str);

    printf("Enter the index you want to remove");
    int index;
    scanf("%d", &index);

    int i = 0;
int j=0;
    while (i < strlen(str))
    {
        if (i % 2 != 0)    
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }
str[j] = '\0'; 
    printf("%s", str);
}