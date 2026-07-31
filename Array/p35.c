// # 88
// merge sorted array
// nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3 ,output=[1,2,2,3,5,6]

#include <stdio.h>
int main(void)
{
    int arr[] = {1, 2, 3, 0, 0, 0};
    int arr1[]={2,5,6};
    int m = 3, n = 3;
    int i = m - 1, j = n - 1, index = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[j] >= arr[i])
        {
            arr[index] = arr1[j];
            j--, index--;
        }
        else
        {
            arr[index] = arr[i];
            i--, index--;
        }
    }

    while (j >= 0)
    {
        arr[index] = arr1[j];
        index--, j--;
    }

    for (int i = 0; i < m + n; i++)
        printf("\t%d", arr[i]);

    return 0;
}