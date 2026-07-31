//# 75
// sort with color
#include <stdio.h>
int main(void)
{
    int arr[] = {1, 1, 0, 2, 0, 1, 2, 0, 2};
    int iLow = 0, iMid = 0, iHigh = 8,temp=0;

    while (iMid <= iHigh)
    {
        if (arr[iMid] == 0)
        {
            temp=arr[iLow];
            arr[iLow] = arr[iMid];
            arr[iMid] = temp;
            iLow++, iMid++;
        }
        else if (arr[iMid] == 1)
        {
            iMid++;
        }
        else
        {
            temp=arr[iHigh];
            arr[iHigh] = arr[iMid];
            arr[iMid]=temp;
            iHigh--;
        }
    }
    printf("\nArray element are:");
    for (iLow = 0; iLow < 9; iLow++)
    {
        printf("%d\t", arr[iLow]);
    }
}
