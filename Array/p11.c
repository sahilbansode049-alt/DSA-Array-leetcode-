//# 283
// using 2-pointer to shift all "zero's" at the end of array...
//[5, 0, 2, 0, 4, 1, 0]=>output=>[5,2,4,1,0,0,0]
// tcs Question


#include <stdio.h>
int main(void)
{
    int arr[] = {5, 0, 2, 0, 4, 1, 0};
    int temp = 0, i = 0, j = 0;

    while (j < 7)
    {
        if (arr[j] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
        j++;
    }
    printf("Array Element Are:");
    for (i = 0; i < 7; i++)
    {
        printf("\t%d", arr[i]);
    }
}
