// # 154
// To find minimum nuber from an array but in array present duplicate number
// Input: nums = [1,3,5] , output:1
// Input: nums = [2,2,2,0,1] , output:0

#include <stdio.h>
int main(void)
{
    int arr[] = {1, 3, 5};
    int n = 3, left = 0, right = n - 1, mid = 0;

    while (left < right)
    {
        while (left < right && arr[left] == arr[left + 1])
            left++;

        while (left < right && arr[right] == arr[right - 1])
            right--;

        mid = left + (right - left) / 2;

        if (arr[mid] > arr[right])
            left = mid + 1;
        else
            right = mid;
    }
    printf("\n%d", arr[right]);

    return 0;
}
