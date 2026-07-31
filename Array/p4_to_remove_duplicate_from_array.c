// remove duplicate from array
//[0,0,1,1,1,2,2,3,3,4]=>output=>[0,1,2,3,4,_,_,_]
// and also return value of k=5 i.e number of sorted element

#include <stdio.h>
int main(void)
{
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int i = 0, j = 1, k = 1, temp = 0;

    while (j < 10)
    {
        if (arr[j] != arr[k])
        {
            k++;
            temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
        }
        j++;
    }

    printf("\nArray Element are:");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\narray sorted element are:%d", k);
    return 0;
}
