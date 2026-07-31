// by using 2-pointer all "zero's" put at end of array but sequence is sorted
//[0,1,0,3,12]=>ouput=>[1,3,12,0,0]


#include<stdio.h>
int main(void)
{
    int arr[]={0,1,0,3,12};
    int i=0,j=0,temp=0;

    while(j<5)
    {
        if(arr[j]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
        j++;
    }
    printf("\nArray Element are:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}