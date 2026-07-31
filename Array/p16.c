//# 35
// To Search insert position if not found return its index
// nums = [1,3,5,6], target = 5,output=>2(index) if not found return its index
// nums = [1,3,5,6], target = 2,output=>1 becouse his index was 2 in sorted array
// nums = [1,3,5,6], target = 7,output=>4 becouse his index was 2 in sorted array
#include <stdio.h>
int main(void)
{
    int arr[] = {1, 3, 5, 6};
    int i = 0, target = 7;

    while (i < 4)
    {
        if (arr[i] == target)
        {
            printf("%d", i);
            return 0;
        }
        else if (arr[i] < target)

            i++;
        else
            break;
    }
    printf("%d", i);
    return 0;
}