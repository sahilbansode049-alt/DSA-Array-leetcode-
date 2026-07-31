// # 81
// search in rotated sorted array 2nd problem same question as #33 but here contain only duplicate element
// Input: nums = [2,5,6,0,0,1,2], target = 0 ,Output: true
// Input: nums = [2,5,6,0,0,1,2], target = 3 ,Output: false

#include <stdio.h>
int main(void)
{
    int arr[] = {2, 5, 6, 0, 0, 1, 2};
    int n = 7;
    int left = 0, right = n - 1, mid = 0, target = 0, found = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            printf("\nTrue");
            found = 1;
            break;
        }

        if (arr[left] == arr[mid] && arr[mid] == arr[right])
        {
            left++;
            right--;
        }

        if (arr[left] <= arr[mid])
        {
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    if (!found)
        printf("False");
}
