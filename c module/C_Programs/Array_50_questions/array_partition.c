#include<stdio.h>
int sum(int* ,int );
void main(){
int nums[] = {6,2,6,5,1,2};
int no=0;
for (int i = 0; i < 6; i++)
{
    for (int j = i+1; j < 6; j++)
    {
        if (nums[i]>nums[j])
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
       

    }

    
}
 int ans=sum(nums,no);
        printf("%d",ans);

for (int i = 0; i < 6; i++)
{
    printf("%d",nums[i]);
}




}

int sum(int* arr,int no){
for (int i = 0; i < 6; i++)
{
    /* code */
    if (i%2==0)
    {
      no = no+ + arr[i];
    }
    
}

return no;

}