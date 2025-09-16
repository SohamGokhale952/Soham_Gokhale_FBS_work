#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[] = "LeeTcOde";
    int lower[26] = {0};
    int upper[26] = {0};
    int len = strlen(str);

    // Count vowels
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            lower[ch - 'a']++;
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            upper[ch - 'A']++;
    }

    char sortedLower[100], sortedUpper[100];
    int lIdx = 0, uIdx = 0;

    // Store lowercase vowels in sorted order
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i] > 0)
        {
            sortedLower[lIdx++] = c;
            lower[i]--;
        }
    }
    sortedLower[lIdx] = '\0';

    // Store uppercase vowels in sorted order
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i] > 0)
        {
            sortedUpper[uIdx++] = c;
            upper[i]--;
        }
    }
    sortedUpper[uIdx] = '\0';

    // Replace vowels in original string
    int lK = 0, uK = 0;
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            str[i] = sortedLower[lK++];
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            str[i] = sortedUpper[uK++];
    }

    printf("%s\n", str);
}
