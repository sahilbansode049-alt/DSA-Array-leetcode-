//# 977
// square of sorted array
//by optimal
#include<stdio.h>
int main(void)
{
    int nums[]={-4,-1,0,3,10};
    int arr[5]={0};
    int i=0,j=4,k=4;

    while(i<j)
    {
        if(nums[i]*nums[i]<nums[j]*nums[j])
        {
            arr[k]=nums[j]*nums[j];
            j--;
        }else
        {
            arr[k]=nums[i]*nums[i];
            i++;
        }
        k--;
    }
    printf("\nArray");
    for(i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}


//brutes-force
// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {-4, -1, 0, 3, 10,5};
//     int i, temp = 0;

//     printf("\nArray Element is:");
//     for (i = 0; i < 6; i++)
//     {
//         printf("\t%d", arr[i]);
//     }

//     for (i = 0; i < 6; i++)
//     {
//         arr[i] = arr[i] * arr[i];
//     }

//     printf("\nSquare of Array is:");
//     for (i = 0; i < 6; i++)
//     {
//         printf("\t%d", arr[i]);
//     }

//     for (int j = 0; j < 6; j++)
//     {
//         for (i = 0; i < 6; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//     }

//     printf("\nSquare of sorted Array is:");
//     for (i = 0; i < 6; i++)
//     {
//         printf("\t%d", arr[i]);
//     }

//     return 0;
// }
