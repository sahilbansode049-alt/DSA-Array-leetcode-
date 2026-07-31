// # 165
// To find peeak element of number and returns its index
// Input: nums = [1,2,3,1],output:2
// Input: nums = [1,2,1,3,5,6,4], output:5
// our function will return index of 2 or 5 index

//by optimal approch
#include<stdio.h>
int main(void)
{
    int arr[]={1,2,3,1};
    int n=4,left=0,right=n-1,mid=0;

    while(left<right)
    {
        mid=left+(right-left)/2;

        if(arr[mid]<arr[mid+1])
            left=mid+1;
        else
            right=mid;
    }
    printf("\n%d",left);
}


//by brute's force approch

// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {1,2,3,1};
//     int i = 0, pivot = 0, n = 4;

//     for (i = 1; i < n - 1; i++)
//     {
//         if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
//         {
//             printf("\nindex: %d", i);
//         }
//     }
//     return 0;
// }