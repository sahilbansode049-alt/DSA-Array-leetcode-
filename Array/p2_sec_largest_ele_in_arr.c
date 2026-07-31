// second largets element in an array

//by optimal
#include<stdio.h>
int main(void)
{
    int arr[6]={12,32,16,26,84,1};
    int max=arr[0],secmax=0,i,j;

    for(i=0;i<6;i++)
    {
        if(arr[i]>max)
        {
            secmax=max;
            max=arr[i];
        }else
        if(arr[i]>secmax && arr[i]!=max)
        {
            secmax=arr[i];
        }
    }
    printf("\nsecondmax:%d\tmaximum:%d",secmax,max);

    return 0;

}

//by nrutes-force approch
// #include<stdio.h>
// int main(void)
// {
//     int arr[6]={12,32,16,26,84,1};
//     int i,check=0,iMax=0,second=0;

//     printf("\nArray element are:");
//     for(i=0;i<6;i++)
//     {
//         printf("\t%d",arr[i]);
//     }
   
//     check=arr[0];
//     for(i=1;i<6;i++)
//     {
//         if(check<arr[i])
//         {
//             check=arr[i];       
//         }
//     }

//     second=arr[0];
//     for(i=0;i<6;i++)
//     {
//         if(check!=arr[i] && arr[i]>second)
//         {
//             second=arr[i];
//         }
//     }

//     printf("\nSecond larggest element in Array is:%d",second);

//     return 0;
// }
