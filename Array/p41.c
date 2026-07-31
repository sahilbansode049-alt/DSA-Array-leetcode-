//# 153
//To find minimum number from rotated sorted array
//Input: nums = [3,4,5,1,2] ,output:1;
//Input: nums = [4,5,6,7,0,1,2] ,output:0
//Input: nums = [11,13,15,17] ,output:11

#include<stdio.h>
int main(void)
{
    int arr[]={4,5,6,7,0,1,2};
    int n=5,left=0,right=n-1,mid=0;

    while (left<right)
    {
        mid=left+(right-left)/2;

        if(arr[mid]>arr[right])
            left=mid+1;
        else
            right=mid;
    }
    printf("\n%d",arr[right]);
    
    return 0;
}
