#include <stdio.h>
char *my_strchr(char *, char);
void main()
{
    char str[] = "hello";
    char ch = 'b';

    char *c = my_strchr(str, ch);

    if (c == NULL)
    {

        printf("not found");
    }
    else
    {

        printf("found at %s", c);
    }
}

char *my_strchr(char *str, char ch)
{

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}
