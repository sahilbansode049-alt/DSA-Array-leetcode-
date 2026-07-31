// # 80
// To remove duplicate from array rather than 2 ,our function return k.
// Input: nums = [1,1,1,2,2,3] ,Output: 5, nums = [1,1,2,2,3,_]
// Input: nums = [0,0,1,1,1,1,2,3,3] , Output: 7, nums = [0,0,1,1,2,3,3,_,_]

#include <stdio.h>
int main(void)
{
    int arr[] = {0,0,1,1,1,1,2,3,3};
    int i = 2, j = 2, n = 9;

    while (j < n)
    {
        if (arr[j] != arr[i - 2])
        {
            arr[i] = arr[j];
            i++;
        }
        j++;
    }
    printf("\nArray:");
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);

    return 0;
}