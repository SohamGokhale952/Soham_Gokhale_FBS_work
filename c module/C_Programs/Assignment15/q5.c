#include <stdio.h>

void main()
{

    char str[] = "aeiou";
    int countvo = 0;
    int counto = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                countvo++;
            }
            else
            {
                counto++;
            }
        }
        i++;
    }

    printf("%d is count of consonents\n",counto);
        printf("%d is count of vowels",countvo);

}