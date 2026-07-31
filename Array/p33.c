// # 33
// Search in rotated sorted array
//  return the index of target if it is in nums, or -1 if it is not in nums
// nums = [4,5,6,7,0,1,2], target = 0 , output=4
// nums = [4,5,6,7,0,1,2], target = 3 , output=-1

#include <stdio.h>
int main(void)
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int mid = 0, found = 0, left = 0, target = 6, right = 6;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if(arr[mid]==target)
        {
            printf("\ntarget %d found at %d position",target,mid);
            found=1;
            break;
        }
        if(arr[left]<=arr[mid])
        {
            if(arr[left]<=target && arr[mid]>target)  //left half sorted
            right=mid-1;
            else
            left=mid+1;

        }else
        {
            if(arr[mid]<target && target<=arr[right])  //right half sorted
            left=mid+1;
            else
            right=mid-1;
        }
    }
    if (!found)
        printf("\n%d is not found..", target);

    return 0;
}
