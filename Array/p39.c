//# 137
//single number 2nd problem , in problem num have 3times we have to find only single element
//Input: nums = [2,2,3,2] , Output: 3
//Input: nums = [0,1,0,1,0,1,99] , Output: 99

//by optimal approch
#include<stdio.h>
int main(void)
{
    int arr[]={2,2,3,2};
    int n=4,count=0,j,ans=0;

    for(int i = 0; i < 32; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if((arr[j] >> i) & 1)
                count++;
        }

        if(count % 3)
            ans |= (1 << i);
    }
    printf("\t%d",ans);

    return 0;

}


//By brute's forcapproch
// #include<stdio.h>
// int main(void)
// {
//     int arr[]={0,1,0,1,0,1,99};
//     int n=7,i=0,j,count=0;

//     for(i=0;i<n;i++)
//     {
//         count=0;
//         for(j=0;j<n;j++)
//         {
//             if(arr[j]==arr[i])
//             {
//                 count++;
//             }

//         }
//         if(count<=2)
//         {
//             printf("\t%d",arr[i]);
//             break;
//         }
//     }
// }
