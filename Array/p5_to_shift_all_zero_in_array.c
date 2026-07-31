//To shft all zero at the end of array

//by optimal
#include<stdio.h>
int main(void)
{
    int arr[8]={1,2,0,3,0,4,5,0};
    int i=0,j=0,temp=0;

    while(j<8)
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
    printf("Array:");
    for(i=0;i<8;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}


//brute-force approch
// #include<stdio.h>
// int main(void)
// {
//     //int arr[8]={1,2,0,3,0,4,5,0};
//     int arr[8]={1,0,0,0,0,8,0,10};
//     int i,temp,p1,p2;
    
//     p1=0;
//     p2=7;
//     for(i=0;i<7;i++)
//     {
//         if(arr[p1]==0)
//         {
//             temp=arr[p2];
//             arr[p2]=arr[p1];
//             arr[p1]=temp;
//             p2--;
//         }
//         else
//         {
//             p1++;
//         }
//     }
//     printf("\nArray element are:");
//     for(i=0;i<8;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }

