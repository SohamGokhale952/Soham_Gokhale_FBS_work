#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char temp[50];

    // 1. strlen
    printf("1. Length of str1: %d\n", strlen(str1));

    // 2. strcpy
    strcpy(temp, str1);
    printf("2. Copied str1 to temp: %s\n", temp);

    // 3. strncpy
    strncpy(temp, str2, 3);

    printf("3. First 3 characters copied: %s\n", temp);

    // 4. strcat
    strcat(str1, str2);
    printf("4. After strcat: %s\n", str1);

    // 5. strncat
    char greet[50] = "Hi ";
    strncat(greet, "Everyone!", 4);
    printf("5. After strncat: %s\n", greet);

    // 6. strcmp
    int z = strcmp("abc", "abc");
    if (z == 0)
    {
        /* code */ printf("6. strings are same: \n");
    }
    else
    {
        printf("strings are not same\n");
    }

    // 7. strncmp
    int y = strncmp("abc", "abcd", 3);
    if (y == 0)
    {
        /* code */ printf("7. first 3 elements are same: \n");
    }
    else
    {
        printf("strings are not same\n");
    }

    // 8. strchr
    char word[] = "hello";
    char *ptr = strchr(word, 'l');

    if (ptr != NULL)
        printf("Character found at: %s\n", ptr);
    else
        printf("Character not found.\n");

    // 9. strrchr=gives the last occurance of the character
    char str[] = "hello world";
    char *ptr = strrchr(str, 'l');

    if (ptr != NULL)
        printf("Last 'l' found at position: %ld\n", ptr - str);
    else
        printf("Character not found.");


    // 10. strstr= finds the first ocurrance of the substrinng
     char str[] = "Hello, this is a test";
    char *sub = "test";

    char *result = strstr(str, sub);

    if (result != NULL) {
        printf("Substring found at: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    // 11. strtok=split the string
    char str3[] = "apple,banana,grape";
    ptr = strtok(str3, ",");
    printf("11. Tokens:\n");
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, ",");
    }

    // 12. strspn=checks if the str1 have the same characters in str2 untill it doesnt not match.
    printf("12. strspn result: %d\n", strspn("abc123", "abc"));

    // 13. strcspn=gives the unmatched characters from str 1 when it finds th ematched caracter it stops the working
    printf("13. strcspn result: %d\n", strcspn("abc123", "123"));

    // 14. strpbrk=Returns pointer to first match from a set
    ptr = strpbrk("computer", "xyzp");
    printf("14. strpbrk result: %s\n", ptr);

    // 15. memset=fills the unoccupied space
    char fill[10];
    memset(fill, '#', 5);
    fill[5] = '\0';
    printf("15. memset result: %s\n", fill);

    // 16. memcpy
    char src[] = "copy";
    char dest[10];
    memcpy(dest, src, strlen(src));
    printf("16. memcpy result: %s\n", dest);

    // 17. memcmp=compare the two strings
    printf("17. memcmp result: %d\n", memcmp("abc", "abd", 2));

    // 18. strdup=duplicates the string by allocating the dynamic memory
    char *copy = strdup("Sample");
    printf("18. strdup result: %s\n", copy);
    free(copy);

    // 19. reverse string manually
    char rev[] = "reverse";
    int i = 0;
    int j = strlen(rev) - 1;
    while (i < j)
    {
        char t = rev[i];
        rev[i] = rev[j];
        rev[j] = t;
        i++;
        j--;
    }
    printf("19. Reversed string: %s\n", rev);

    // 20. tolower and toupper
    printf("20. tolower of 'H': %c\n", tolower('H'));
    printf("    toupper of 'm': %c\n", toupper('m'));

    // 21. sprintf
    int age = 22;
    sprintf(temp, "21. Age is %d", age);
    printf("%s\n", temp);


}
