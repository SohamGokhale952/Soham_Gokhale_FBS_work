#include <stdio.h>

void main()
{
    char str1[] = "qwertyuiop";
    char str2[] = "asdfghjkl";
    char str3[] = "zxcvbnm";
    char strArr2[100];
    char strArr[5][20] = {"Hello", "Alaska", "Dad", "Peace"}; // 5 strings, each up to 19 characters
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; strArr[5][20] != '\0'; j++)
        {
            if (str1[i] ==strArr[i][j])
            {
                strArr2[k] = strArr[i][j];
                k++;
            }
        }
    }
}