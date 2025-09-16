// #include <stdio.h>
// char *my_strchr(char *, char);
// void main()
// {
//     char str[] = "hello";
//     char ch = 'b';

//     char *c = my_strchr(str, ch);

//     if (c == NULL)
//     {

//         printf("not found");
//     }
//     else
//     {

//         printf("found at %s", c);
//     }
// }

// char *my_strchr(char *str, char ch)
// {

//     int i = 0;

//     while (str[i] != '\0')
//     {
//         if (str[i] == ch)
//         {
//             return &str[i];
//         }
//         i++;
//     }
//     return NULL;
// }

// #include <stdio.h>

// char* my_strstr(char*, char*);

// int main() {
//     char str[] = "hellostudents";
//     char str2[] = "shrava";

//     char* result = my_strstr(str, str2);

//     if (result == NULL) {
//         printf("Substring not found.\n");
//     }

//     return 0;
// }

// char* my_strstr(char* str, char* str2) {
//     if (str == NULL || str2 == NULL) {
//         return NULL;
//     }

//     char* p1 = str;        
//     char* p2;

//     char* p1_start;

//     while (*p1 != '\0') {
//         p2 = str2;
//         p1_start = p1;

//         while (*p2 != '\0' && *p1 == *p2) {
//             p1++;
//             p2++;
//         }

//         if (*p2 == '\0') {
//             printf("found at %s\n", p1_start);
//             return p1_start;
//         }

//         p1 = p1_start + 1;
//     }

//     return NULL;  
// // }

// #include<stdio.h>
// void my_concat(char* ,char* );
// void main(){
//  char str[]="hello";
//  char str2[]="students";

//  my_concat(str,str2);





// }

// void my_concat(char* str,char* str2){

//     char str3[200];

//     int i=0;
//     int j=0;
//     while (str[i]!='\0' )
//     {
//        str3[i]=str[i];
//        i++;
//     }
//      while (str2[j]!='\0' )
//     {
//        str3[i]=str2[j];
//        i++;
//        j++;
//     }
//     printf("Concatenated string: %s\n", str3);


// }



#include<stdio.h>
void toupperr(char* );
void main(){

char str[]="abc";

toupperr(str);
printf("%s",str);

}

void toupperr(char* str){



for (int i = 0; str[i] != '\0'; i++)
{
   str[i]=str[i]-32;
}

// return str;
}



// #include <stdio.h>

// char* toupperr(char* str);

// void main() {
//     char str[] = "abc";
//     char* x = toupperr(str); // Correct: char* not char
//     printf("%s", x);
// }

// char* toupperr(char* str) {
//     static char str1[15];  // static keeps it alive after function returns

//     for (int i = 0; str[i] != '\0'; i++) {
//         str1[i] = str[i] - 32;  // convert to uppercase (assumes all lowercase)
//     }

//     return str1;
// }



// #include<stdio.h>

// void main(){

// char str[]="ABC";

// char x= tolowerr(str);
// printf("%s",x);

// }

// char* tolowerr(char* str){

// char str1[15];

// for (int i = 0; str[i] != '\0'; i++)
// {
//    str1[i]=str[i]-32;
// }

// return str1;
// }
