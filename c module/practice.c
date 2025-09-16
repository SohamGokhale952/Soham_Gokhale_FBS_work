#include <stdio.h>
void main()
{

    char arr[5] = "hlloo";
    int unique;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        unique = 1;
        for (int j = 0; arr[j]!='\0'; j++)

        {
            if (i!=j)
            {
                /* code */
           
            
            if (arr[i] == arr[j])
            {
                unique = 0;
                break;
            }
             }
        }

        /* code */
        if (unique)
        {
            printf("%c", arr[i]);
        }
    }
} 