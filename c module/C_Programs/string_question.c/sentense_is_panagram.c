#include <stdio.h>
#include <string.h>
void check_panagram(char *, int *);
void main()
{

    char str[] = "thequickbrownfoxjumpsoverthelazydog";
    int check[26] = {0};

    int flag = 1;
    check_panagram(str, check);

    for (int i = 0; i < 26; i++)
    {
        if (check[i] == 0)
        {
            flag = 0;
            printf("Sentense is not in panagram");
            break;
        }
    }
    if (flag == 1)
    {
        printf("Sentense is in panagram");
    }
}
void check_panagram(char *str, int *check)
{

    int len = strlen(str);

    for (int i = 0; i <= len - 1; i++)
    {

        check[str[i] - 'a'] = 1;
    }
}