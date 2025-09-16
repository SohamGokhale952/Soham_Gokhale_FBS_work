
// #include <stdio.h>

// void main()
// {
//     char str[] = "abccd";
//     char result[100]; // Enough space
//     int k = 0;

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         int isDuplicate = 0;
//         for (int j = 0; j < i; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 isDuplicate = 1;
//                 break;
//             }
//         }
//         if (!isDuplicate)
//         {
//             result[k++] = str[i];
//         }
//     }

//     // Print the unique characters
//     for (int i = 0; i < k; i++)
//     {
//         printf("%c", result[i]);
//     }
// }
