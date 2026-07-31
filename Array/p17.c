//# 136
//To find single element it should be not twice
//Input: nums = [2,2,1],output=>1
//Input: nums = [4,1,2,1,2],output=>4
#include<stdio.h>
int main(void)
{
    int arr[]={2,2,1};
    int i,ans=0;

    for(i=0;i<3;i++)
    {
        ans=ans^arr[i];
    }

    printf("\n%d",ans);

    return 0;
}