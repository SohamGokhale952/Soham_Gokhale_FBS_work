#include<stdio.h>
void main(){
    int arr[4]={0,1,0,3};
    int new[4];
    int j=0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]!=0)
        {
        
            new[j]=arr[i];
            j++;
        }
        

        
    }


    while (j<4)
    {   
        new[j]=0;
        j++;
    }
    for (int i = 0; i < 4; i++)
    {
printf("%d",new[i]);    }
    
    
}