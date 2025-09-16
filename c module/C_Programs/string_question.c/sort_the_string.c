#include <stdio.h>
#include <stdio.h>
void main()
{

    char str[] = "adbc";
    int len = strlen(str);
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {

            if (str[j] < str[i])
            {

                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
}