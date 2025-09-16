#include <stdio.h>
#include<string.h>
void main()
{

    char str[] = "aaaabccddde";

    int len = strlen(str);

    int lower[26] = {0};
    int upper[26] = {0};

    for (int i = 0; i < len ; i++)
    {

        if (str[i] >= 'a')
        {
            lower[str[i] - 'a']++;
        }

        else
        {
            upper[str[i] - 'a']++;
        }
    }
    
int count=0;

for (int i = 0; i < 26; i++)
{
    if (lower[i]%2==0)
    {
       count+=lower[i];
    }
    else
    {
        count+=lower[i]-1;
        if (lower[i]==1)
        {
            count+=1;
        }
        
    }
    
}

printf("%d",count);

}
