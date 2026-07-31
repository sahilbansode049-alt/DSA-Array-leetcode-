// # 34
// To find first and last position of element in sorted array
// Input: nums = [5,7,7,8,8,10], target = 8 , Output: [3,4]
// Input: nums = [5,7,7,8,8,10], target = 6 ,Output: [-1,-1]

// by also optimal approch and time complexity have O(log n)
// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {5, 7, 7, 8, 8, 10};
//     int arr1[2] = {0};
//     int left = 0, found = 0, target = 8, right = 5, mid = 0;

//     while (left <= right) // for first occurence
//     {
//         mid = (left + right) / 2;

//         if (arr[mid] == target)
//         {
//             arr1[0] = mid;
//             right = mid - 1;
//             found = 1;
//         }

//         else if (arr[mid] > target)
//             right = mid - 1;
//         else
//             left = mid + 1;
//     }

//     left = 0, right = 5;
//     while (left <= right) // for secound occurence
//     {
//         mid = (left + right) / 2;

//         if (arr[mid] == target)
//         {
//             arr1[1] = mid;
//             left = mid + 1;
//             found++;
//         }

//         else if (arr[mid] > target)
//             right = mid - 1;
//         else
//             left = mid + 1;
//     }

//     if (!found)
//         printf("first and last position of element is not found:-1 -1");
//     else
//         printf("\n[%d %d]", arr1[0], arr1[1]);

//     return 0;
// }

#include<stdio.h>
int main
// by optimal approch but time complexity O(n) and leetcode have O(log n)
// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {5, 7, 7, 8, 8, 10};
//     int i = 0, j = 5, found1 = 0, found2 = 0, target = 7;

//     while (i <= j)
//     {
//         if (found1 == 0)
//         {
//             if (arr[i] == target)
//                 found1 = 1;
//             else
//                 i++;
//         }

//         if (found2 == 0)
//         {
//             if (arr[j] == target)
//                 found2 = 1;
//             else
//                 j--;
//         }
//         if (found1 == 1 && found2 == 1)
//             break;
//     }
//     if (!found1)
//         printf("target %d is not found hance:-1 -1", target);
//     else
//         printf("first and last target is :%d and %d", i, j);

//     return 0;
// }
