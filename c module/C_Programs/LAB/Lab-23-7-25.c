// #include <stdio.h>

// int my_compare(char* str1, char* str2);  // Function prototype

// void main() {
//     char str1[] = "hello";
//     char str2[] = "ello";

//     int x = my_compare(str1, str2);

//     if (x == 1) {
//         printf("string is matched");
//     } else {
//         printf("string is not matched");
//     }
// }

// int my_compare(char* str1, char* str2) {
//     int i = 0;
//     while (str1[i] != '\0' && str2[i] != '\0') {
//         if (str1[i] != str2[i]) {
//             return 0;
//         }
//         i++;
//     }


//     if (str1[i] != '\0' || str2[i] != '\0') {
//         return 0;
//     }

//     return 1;
// }


#include<stdio.h>
void encrypt(char* );
void decrypt(char* );
void main() {

	char str1[]="abcd";
	printf("Orignal string: %s\n", str1);
	encrypt(str1);
	printf("Encrypted string: %s\n", str1);

	decrypt(str1);

	printf("decrypted string: %s\n", str1);

}

void encrypt(char* str1) {

	int i=0;
	while (str1[i]!='\0') {
		str1[i]=str1[i]+3;
		i++;
	}

}


void decrypt(char* str1) {
	int i = 0;
	while (str1[i] != '\0') {


		str1[i] = str1[i] - 3;

		i++;
	}
}