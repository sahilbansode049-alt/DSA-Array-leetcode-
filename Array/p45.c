// # 215
// To find kth largest element in an array by using "Quick select (Hoare's partition) Algorithm"
// Input: nums = [3,2,1,5,6,4], k = 2 , output:5
// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4 , output:4

#include <stdio.h>
int main(void)
{
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = 6, pivot = 0, i = 0, temp = 0, j = n - 1;

    while (i < j)
    {
        if (arr[i] < arr[pivot] && arr[j] > arr[pivot])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        if (arr[i] >= arr[pivot])
            i++;

        if (arr[pivot] >= arr[j])
            j--;
    }
    pivot = j;

    while (i < j)
    {
        if (arr[i] < arr[pivot] && arr[j] > arr[pivot])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        if (arr[i] >= arr[pivot])
            i++;

        if (arr[pivot] >= arr[j])
            j--;
    }
}