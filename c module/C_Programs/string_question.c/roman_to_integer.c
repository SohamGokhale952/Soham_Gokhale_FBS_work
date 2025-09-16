#include <stdio.h>
#include<string.h>
void main()
{

    char roman[] = "IVXLCDM";
    int integer[7] = {1, 5, 10, 50, 100, 500, 1000};
    int values[20];
    
    printf("Enter the string: \n");
    char str[20];
    scanf("%s", str);

    printf("%s", str);

    // int k = 0;

    int i = 0;
    while (str[i] != '\0')
    {

        for (int j = 0; roman[j] != '\0'; j++)
        {
            if (str[i] == roman[j])
            {
                values[i] = integer[j];
                break;
                
            }
        }
        i++;
    }
int len = strlen(str);
  int total = 0;
for (int i = 0; i < len; i++) {
    if (i<len-1&&values[i] < values[i + 1])
        total =total- values[i];
    else
        total =total+ values[i];
}
printf("Integer = %d\n", total);

}