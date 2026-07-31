//Reverce an Array

//by optimal approch
#include<stdio.h>
int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int temp=0,i=0,j=5;

    while(i<j)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;j--;
    }

    printf("\nAfter sorted array Array:");
    for(i=0;i<6;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}

//Brutes-force approch
// #include <stdio.h>
// int main(void)
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int temp = 0, i, j;

//     printf("\nBefore reverse array is:");
//     for (i = 0; i < 6; i++)
//     {
//         printf("%d\t", arr[i]);
//     }

//     i = 0;
//     j = 5;
//     while (i < j)
//     {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;

//         i++;
//         j--;
//     }

//     printf("\nAfter reverse array is:");
//     for (i = 0; i < 6; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
// }
