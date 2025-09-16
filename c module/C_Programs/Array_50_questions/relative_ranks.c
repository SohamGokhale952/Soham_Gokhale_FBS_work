#include<stdio.h>
#include<string.h>
void setRank(char* ,int);

void main()
{

    int arr[]={10,3,8,9,4};
    int arr1[5]={0};
    int arr2[5]={0};
    char output[5][20];
    for (int k = 0; k <5; k++)
    {
        arr1[k]=arr[k];
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j <5; j++)
        {
          
        if (arr[j]>arr[i])
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }  
        }
        
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i]==arr[j])
            {
               arr2[i] = j + 1;
               break;
            }
            
        }

            
    }
    
    
    // for (int k = 0; k < 5; k++)
    // {
    //     printf("%d",arr2[k]);
    // } gives rank in the numeric form

    for (int j = 0; j < 5; j++)
    {
        setRank(output[j],arr2[j]);
    }
    
for (int k = 0; k < 5; k++) {
        printf("%s ", output[k]);
    }
}

void setRank(char* ptr,int rank)
{
     if (rank == 1)
        strcpy(ptr, "Gold Medal");
    else if (rank == 2)
        strcpy(ptr, "Silver Medal");
    else if (rank == 3)
        strcpy(ptr, "Bronze Medal");
    else
        sprintf(ptr, "%d", rank); //convert integer into integer  string
    

}