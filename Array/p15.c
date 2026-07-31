// # 27
// To remove Element from in-place array
// nums = [3,2,2,3], val = 3
// output->2
// nums = [0,1,2,2,3,0,4,2], val = 2
// output->5

#include <stdio.h>
int main(void)
{
    int arr[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int i = 0, k = 0, j = 0, temp = 0, val = 2;

    while (j < 8)
    {
        if (arr[j] != val)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            k++;
        }
        j++;
    }
    printf("value of k=%d\n", k);
    for (i = 0; i < 8; i++)
        printf("\t%d", arr[i]);

    return 0;
}

//best solution

// int removeElement(int* nums, int numsSize, int val) {
//     int k = 0;

//     for(int i = 0; i < numsSize; i++) {
//         if(nums[i] != val) {
//             nums[k] = nums[i];
//             k++;
//         }
//     }

//     return k;
// }