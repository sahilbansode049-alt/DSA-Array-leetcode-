// # 1299

// replace element with gretest element on right side
// arr = [17,18,5,4,6,1] , output:[18,6,6,6,1,-1]
// arr = [400], output:-1

// by optimal-approch
#include <stdio.h>
int main(void)
{
    int arr[] = {17, 18, 5, 4, 6, 1};
    int i, curmax=0, temp = 0;

    curmax=arr[5];
    arr[5]=-1;
    for (i = 6 - 2; i >= 0; i--)
    {
        if (arr[i] > curmax)
        {
            temp = arr[i];
            arr[i] = curmax;
            curmax = temp;
        }
        else
        {
            arr[i] = curmax;
        }
    }
    
    for (i = 0; i < 6; i++)
        printf("\t%d", arr[i]);

    return 0;
}

// By brutes force approch
//  #include<stdio.h>
//  int main(void)
//  {
//      int arr[]={17,18,5,4,6,1};
//      int output[6]={0};
//      int i,j,max=arr[1];

//     for(i=0;i<5;i++)
//     {
//         max=arr[i+1];
//         for(j=i+1;j<6;j++)
//         {
//             if(max<arr[j])
//                 max=arr[j];
//         }
//         output[i]=max;
//     }
//     output[5]=-1;

//     printf("\nArray:");
//     for(i=0;i<6;i++)
//     {
//         printf("\t%d",output[i]);
//     }

//     return 0;
// }