//# 448
// To find all number dis-appeared in an array
// nums =[4,3,2,7,8,2,3,1], output=[5,6]
// nums = [1,1] ,output=[2]

//By optimize code
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int i,j;

    for(i=0;i<8;i++)
    {
        j=abs(arr[i])-1;   //which returns positive value
        
        if(arr[j]>0)
            arr[j]=-arr[j];
    }
    
    for(i=0;i<8;i++)
    {
        if(arr[i]>0)
        printf("\t%d",i+1);
    }

    return 0;
}
//Brute's force approch
// #include <stdio.h>
// int main(void)
// {
//     int arr2[8] = {0};
//     int arr1[] = {4, 3, 2, 7, 8, 2, 3, 1};
//     int k = 0, i, j, found = 0;

//     for (i = 0; i < 8; i++)
//     {
//         found=0;
//         for (j = 0; j < 8; j++)
//         {
//             if (arr1[j] == i + 1)
//             {
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 0)
//             arr2[k++] = i + 1;
//     }
//     for (i = 0; i < k; i++)
//     {
//         printf("%d\t", arr2[i]);
//     }
//     return 0;
// }
