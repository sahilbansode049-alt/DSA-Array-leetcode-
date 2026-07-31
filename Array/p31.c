// # 189
// Rotate array right side of 3 times
// nums = [1,2,3,4,5,6,7], k = 3 ,output->[5,6,7,1,2,3,4]
// nums = [-1,-100,3,99], k = 2  ,output->[3,99,-1,-100]

#include <stdio.h>
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int temp = 0, i = 0, j = 6, k = 3;

    k = k % 7;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i = 0, j = k - 1;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i = k, j = 6;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(i=0;i<7;i++)
    {
        printf("%d\t",arr[i]);
    }
}
