//# 217 
//To check duplicate from an array if it present so return 'true' otherwise 'false'
//Input: nums = [1,2,3,1],output=>true
//Input: nums = [1,2,3,4],output=>false
//nums = [1,1,1,3,3,4,3,2,4,2],output=>true

//optimize by alorithm
#include<stdio.h>
int main(void)
{
    //only we can solve by usind sort function in c++
}

//brutem force
/*
#include<stdio.h>
int main(void)
{
    int arr[]={1,2,3,4};
    int j,i;

    for(i=0;i<4-1;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("In Array duplicate element are present.");
                return 0;
            }
        }
    }
    printf("\nIn array duplicate element is not present");
    return 0;
}
*/