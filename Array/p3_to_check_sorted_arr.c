// 
#include<stdio.h>
int main(void)
{
    int arr[6]={1,8,3,4,5,6};
    int i,check=0,found=0;

    check=arr[0];
    for(i=1;i<6;i++)
    {
        if(arr[i]>check)
        {
            check=arr[i];
        }
        else
        {
            printf("\nArray is not sorted.");
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("\nArray is sorted array...");
    }

    return 0;
}