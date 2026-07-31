//# GreekForGreeks
// Sliding window , no -ve is present in this Algorithm
// To return first negative numbers from sub-array otherwise return '0'
// int arr[] = {12, -1, -7, 8, -15, 30, 16, 28}; ,k=3  , output= -1,-1,-7,-15,-15,0

//by optimize
#include<stdio.h>
int main(void)
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int k=3,i=0,j=0;

    while(i<8-k)
    {
        if(arr[j]<0)
        {
            printf("%d\t",arr[j]);
            j++;
        }
        i++;
    }

    return 0;
}


// brute-force approch
// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
//     int k = 3, i, j, found = 0;

//     for (i = 0; i <= 8 - k; i++)
//     {
//         found = 0;
//         for (j = i; j < k + i; j++)
//         {
//             if (arr[j] < 0)
//             {
//                 printf("%d\t", arr[j]);
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 0)
//             printf("0\t");
//     }
//     return 0;
// }

