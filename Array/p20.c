//# 268 
// To find missing element from an array
// Input: nums = [3,0,1],output=2
// Input: nums = [9,6,4,2,3,5,7,0,1],output=8

#include <stdio.h>
int main(void)
{
    int arr[] = {3,0,1};
    int calcu_sum = 0, actual_sum = 0, i, result = 0;

    for (i = 0; i < 3; i++)
    {
        calcu_sum = calcu_sum + arr[i];
    }

    actual_sum = 3 * (3 + 1) / 2;
    result = actual_sum - calcu_sum;

    printf("%d", result);

    return 0;
}
