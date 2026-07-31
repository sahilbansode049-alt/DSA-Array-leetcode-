// # 977
// square of sorted array
// nums = [-4,-1,0,3,10] , output:[0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].

#include<stdio.h>
int main(void)
{
    int nums[]={-4,-1,0,3,10};
    int arr[5]={0};
    int i=0,j=4,k=4;

    while(i<j)
    {
        if(nums[i]*nums[i]<nums[j]*nums[j])
        {
            arr[k]=nums[j]*nums[j];
            j--;
        }else
        {
            arr[k]=nums[i]*nums[i];
            i++;
        }
        k--;
    }
    printf("\nArray");
    for(i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}
