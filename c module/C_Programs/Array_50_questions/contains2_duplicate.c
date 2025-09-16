#include <stdio.h>

void main()
{

    int arr[6] = {1,2,3,1,2,3};
    int k = 2;
int flag=1;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j<6; j++)
        {
            if (arr[i]==arr[j]&& j-i<=k)
            {
                printf("true");
                flag=0;
                break;
            }
            
        }
    }

    
        if (flag==1)
        {
 printf("flase");        }
}