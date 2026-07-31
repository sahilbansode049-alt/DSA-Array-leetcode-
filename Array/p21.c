//# 713
//sliding-window , no -ve is present in this Algorithm
// To find product of subarray less than k=100 by using sliding window
// nums = [10,5,2,6], k = 100,output=8
// SubArray's=[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]

#include <stdio.h>
int main(void)
{
    int arr[] = {10, 5, 2, 6};
    int i = 0, j = 0, product = 1, count = 0, k = 100;

    while (j < 4)
    {
        product = product * arr[j];
        if (product < k)
        {
            count = count + (j - i + 1);
            j++;
        }
        else
        {
            while (product >= k)
            {
                product = product / arr[i];
                i++;
            }
            count = count + (j - i + 1);
            j++;
        }
    }
    printf("\nNumber of SubArray's for product is %d", count);
}

