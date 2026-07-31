//# 1342
//To return the number of count to reduce num=14
//Input: num = 14,output=6
//Input: num = 8 ,output=4

// #include<stdio.h>
// int main(void)
// {
//     int num=14,count=0;

//     while(num!=0)
//     {
//         if(num%2==0)
//             num=num/2;
//         else
//             num=num-1;

//         count++;
//     }
//     printf("\n%d",count);

//     return 0;
// }

#include<stdio.h>
int main(void)
{
    int num=14,count=0;

    while(num!=0)
    {
        if(num%2==0)
            num=num/2;
        else
            num=num-1;

        count++;
    }
    printf("\t%d",count);

    return 0;
}