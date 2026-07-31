//2-sum by using 2-pointer pattern....

// #include <stdio.h>
// int main(void)
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int target = 5, iFirst=0,iLast=5, sum = 0;

//     while(iFirst<iLast)
//     {
//         sum=arr[iFirst]+arr[iLast];
//         if(sum==target)
//         {
//             printf("\ntwo index is %d and %d",iFirst,iLast);
//             break;
//         }
//         if(sum>target)
//         {
//             iLast--;
//         }
//         else
//         {
//             iFirst++;
//         }
//     }
// }
#include<stdio.h>
int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int left=0,right=5,target=5,sum=0;

    while(left<right)
    {
        sum=arr[left]+arr[right];

        if(sum==target)
        {
            printf("\nindex %d and %d",left,right);
            break;
        }
        if(sum>target)
            right--;
        else
            left++;
    }
    
}