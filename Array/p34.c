// # 41 
// nums = [1,2,0] , output:3 ,
// Input: nums = [3,4,-1,1] , output=3,
// Input: nums = [7,8,9,11,12], output=1,
//nums:[3,4,-1,-2,1,5,16,0,2,0]


// by optimal code
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int arr[] = {3,4,-1,-2,1,5,16,0,2,0};
    int num, i, indx, found = 0,n=10;

    for (i = 0; i < n; i++)
    {
        if (arr[i] <= 0 || arr[i] > n)
            arr[i] = n+1;
    }

    for (i = 0; i < n; i++)
    {
        num = abs(arr[i]);
        if (num >= 1 && num <= n)
        {
            indx = num - 1;

            if (arr[indx] > 0)
                arr[indx] = -arr[indx];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("%d", n+1);

    return 0;
}

// by brute's-force approch
// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {3, 4, -1, 1};
//     int i, j, found = 0;

//     for (i = 0; i <= 4; i++)
//     {
//         found = 0;
//         for (j = 0; j <= 4; j++)
//         {
//             if (arr[j] == i + 1)
//             {
//                 found = 1;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             printf("\n%d is first positive missing element..", i + 1);
//             break;
//         }
//     }

//     return 0;
// }