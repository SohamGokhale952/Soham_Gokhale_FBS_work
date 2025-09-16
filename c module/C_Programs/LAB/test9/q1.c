

#include <stdio.h>

void main()
{
    char str[] = "abccd";
    char str1[100]; 
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                count = 1;
                break;
            }
        }
        if (!count)
        {
            str1[k++] = str[i];
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%c", str1[i]);
    }
}
