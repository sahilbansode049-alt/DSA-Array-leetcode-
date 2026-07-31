// # 1539
// find kth missing element from an sorted array
// Input: arr = [2,3,4,7,11], k = 5 ,Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
// Input: arr = [1,2,3,4], k = 2 ,output=6

// by optimal using binary search approch
#include <stdio.h>
int main(void)
{
    int arr[] = {2, 3, 4, 7, 11};
    int missing = 0, k = 5, n = 5, left = 0, right = n - 1, mid = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        missing = arr[mid] - (mid + 1);

        if (missing < k)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("missing element is %d", left + k);

    return 0;
}

// by brute's force approch
//  #include<stdio.h>
//  int main(void)
//  {
//      int arr[]={1,2,3,4};
//      int i=0,count=0,n=5,j=0,k=2;

//     while(count<k)
//     {
//         if(arr[j]!=i+1)
//         {
//             count++;
//             i++;
//         }
//         else
//         {
//             j++;
//             i++;
//         }
//     }
//     printf("\n%d",i);
// }
