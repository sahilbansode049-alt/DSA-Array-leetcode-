//# 169
// To find mejority of element by using moore's voting algorithm
// Input: nums = [3,2,3],output=>3
// Input: nums = [2,2,1,1,1,2,2],output=>2

#include <stdio.h>
int main(void)
{
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int ans = nums[0];
    int count = 1;

    for (int i = 1; i < 7; i++)
    {
        if (count == 0)
        {
            ans = nums[i];
            count = 1;
        }
        else if (nums[i] == ans)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    printf("\n%d", ans);
    return 0;
}
