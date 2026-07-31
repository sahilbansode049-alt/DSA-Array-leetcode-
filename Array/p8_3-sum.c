// //3-sum using 2-pointer
// #include<stdio.h>
// int main(void)
// {
//     int arr[]={-1,-1,-1,0,0,0,1,2,2,3};
//     int low=0,mid=0,high=9,target=0;

//     for(int i=0;i<8;i++)
//     {
//         while(mid<high)
//         {
//             int sum=arr[low]+arr[mid]+arr[high];

//             if(sum==target)
//             {
//                 printf("%d\t%d\t%d",low,mid,high);
//             }
//             if(sum>target)
//                 high--;
//             else
//                 mid++;
//         }
//     }
// }
#include <stdio.h>

int main()
{
    int arr[] = {-1, -1, -1, 0, 0, 0, 1, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    for (int i = 0; i < n - 2; i++)
    {
        int mid = i + 1;
        int high = n - 1;

        while (mid < high)
        {
            int sum = arr[i] + arr[mid] + arr[high];

            if (sum == target)
            {
                printf("Indices: %d %d %d\n", i, mid, high);

                mid++;
                high--;
            }
            else if (sum < target)
            {
                mid++;
            }
            else
            {
                high--;
            }
        }
    }

    return 0;
}