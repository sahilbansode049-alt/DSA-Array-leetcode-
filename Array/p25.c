//# 152
// Kadane's Algorithm
//  To find maximum product sub-array
//  nums = [2,3,-2,4],output=6
//  nums = [-2,0,-1],output=0
//nums=[-2,3,-4],output=24


// by Optimal-Approch
#include <stdio.h>
int main(void)
{
    int arr[] = {-2,3,-4};
    int i, prefix = 0, max = 0, sufix = 0, product = 1;

    for (i = 0; i < 3; i++)
    {
        if (prefix == 0)
            prefix = 1;

        if (sufix == 0)
            sufix = 0;

        prefix *= arr[i];
        sufix *= arr[3 - 1 - i];

        if (prefix > max)
            max = prefix;

        if (sufix > max)
            max = sufix;
    }
    printf("%d", max);
    return 0;
}

// Brute's-force Approch
//  #include <stdio.h>
//  int main(void)
//  {
//      int arr[] = {2,3,-2,4};
//      int i, j, prod = 1, maxProduct = 0;

//     for (i = 0; i < 4; i++)
//     {
//         prod = 1;
//         for (j = i; j < 4; j++)
//         {
//             if (arr[j] < 0)
//                 break;

//             prod *= arr[j];

//             if (prod < 0)
//                 break;

//             if (prod > maxProduct)
//                 maxProduct = prod;
//         }
//     }
//     printf("%d", maxProduct);
//     return 0;
// }