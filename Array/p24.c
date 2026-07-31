//# 53
// Kadane's Algorithm
// To find maximum subarry
// nums = [-2,1,-3,4,-1,2,1,-5,4],output=6
// nums = [5,4,-1,7,8],output=23

// optimal approch
#include <stdio.h>
int main(void)
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int i = 0, sum = 0, max = arr[0];

    for (i = 0; i < 9; i++)
    {
        sum += arr[i];

        if (sum > max)
            max = sum;

        if (sum < 0)
            sum = 0;
    }
    printf("%d", max);

    return 0;
}

// by brute-force approch
//  #include<stdio.h>
//  int main(void)
//  {
//      int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//      int i=0,j=0,sum=0,max=0;

//     for(i=0;i<9;i++)
//     {
//         sum=0;
//         for(j=i;j<9;j++)
//         {
//             sum=sum+arr[j];

//             if(sum>max)
//             max=sum;
//         }
//     }
//     printf("%d",max);

//     return 0;
// }