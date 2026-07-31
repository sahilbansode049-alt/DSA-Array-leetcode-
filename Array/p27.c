//# 219
// Given an integer array nums and an integer k, return true if there are two 
//distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k
// nums = [1,2,3,1], k = 3 , output=true
// nums = [1,0,1,1], k = 1 , output=true
// nums = [1,2,3,1,2,3], k = 2, output=false


//optimal solution is used c++ using map

#include <stdio.h>
int main(void)
{
    int arr[] = {1,0,1,1};
    int i, j, k = 1, found = 0;

    for (i = 0; i < 4 - 1; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j] && (j - i) <= k)
            {
                printf("\nTrue");
                found = 1;
            }
        }
    }
    if (found == 0)
    {
        printf("\nFalse");
    }

    return 0;
}
