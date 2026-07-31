// 2nd largest element , not present in leetcode

// optimal solution
#include <stdio.h>
int main(void)
{
    int nums[] = {3, 4, 5, 2};
    int i, max = nums[0], secondMax = nums[0];

    for (i = 0; i < 4; i++)
    {
        if (nums[i] > max)
        {
            secondMax = max;
            max = nums[i];
        }
        else if (nums[i] > secondMax && nums[i] != max)
            secondMax = nums[i];
    }
    printf("\n%d is secound maximum number", secondMax);

    return 0;
}
