#include<stdio.h>

void main()
{

    int arr[]={1,1,2,3};
    int n=sizeof(arr)/4;
    int unique[n];
    int k=0;
    for (int i = 0; i < n; i++)
    {    int isunique=0  ;

        for (int  j=0; j<i; j++)
        {
            if (arr[i]==arr[j])
            {
                isunique=1;
                break;
            }
            
        }
    if (isunique==0)
    {
        unique[k]=arr[i];
        k++;
    }
        



    }
    int candies_allowed =n/2;

    if (candies_allowed<=k)
    {
        printf("%d",candies_allowed) ;
    }
    else
    {
         printf("%d",k) ;
    }
    

    
//  for (int i = 0; i < k; i++) {
//         printf("%d ", unique[i]);
//     }


}