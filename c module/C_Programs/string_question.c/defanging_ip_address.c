// NOTE-> If i writ the function for defagging anf=d ans is decleared only in the function to tackle that i need to use the malloc to assign the heap memory..

#include <stdio.h>
#include <string.h>
void main()
{

    char str[] = "1.1.1.1";
    int len = strlen(str);
    char ans[100];
    int i = 0;
    int j = 0;
    while (i <= len)
    {
        if (str[i] == '.')
        {
            ans[j] = '[';
            j++;
            ans[j] = '.';
            j++;
            ans[j] = ']';
            j++;
        }
        else
        {
            ans[j] = str[i];
            j++;
        }
        i++;
    }

    printf("%s", ans);
}