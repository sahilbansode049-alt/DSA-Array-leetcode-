//# 209
// sliding window,no -ve is present in this Algorithm
//  To find minimun lenth of subarray which is grater than or equale to target
// target = 7, nums = [2,3,1,2,4,3] , output=2
// The subarray [4,3] has the minimal length under the problem constraint.
// target = 4, nums = [1,4,4] , output=1

// by sliding wndow
#include <stdio.h>
int main(void)
{
    int arr[] = {2,3,1,2,4,3};
    int countlenth = 0, minlenth = 6 + 1, i = 0, j = 0, target = 7, sum = 0;

    while(j<6)
    {
        sum=sum+arr[j];

        while(sum>=target)
        {
            countlenth=j-i+1;
            if(countlenth<minlenth)
                minlenth=countlenth;

            sum=sum-arr[i];
            i++;
        }
        j++;
    }
    if (minlenth == 6 + 1)
        return 0;
    printf("\nminimum lenth of subarray is %d",minlenth);
}

// brute-force approch
//  #include<stdio.h>
//  int main(void)
//  {
//      int arr[]={2,3,1,2,4,3};
//      int countlenth=0,minlenth=6+1,i=0,j=0,target=7,sum=0;

//     for(i=0;i<6-1;i++)
//     {
//         sum=0;
//         for(j=i;j<6;j++)
//         {
//             sum+=arr[j];

//             if(sum>=target)
//             {
//                 countlenth=j-i+1;
//                 if(countlenth<minlenth)
//                     minlenth=countlenth;
//                 break;
//             }

//         }
//     }
//     printf("\nminimum lenth of subarray is %d",minlenth);
// }