//#swap 2 numbers in array , this question not on leetcode
//we can swap 3 type to swap varibal
#include<stdio.h>
int main(void)
{
    //1st type using 3rd variable
    int a=3,b=5;
    printf("\nbefore swap this 2 values:%d\t%d",a,b);

    int temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap:%d\t%d",a,b);


    //2nd type without using 3rd variable
    int x=30,y=50;
    printf("\nbefore swap this 2 values:%d\t%d",x,y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter swap:%d\t%d",x,y);

    //3rd type without using 3rd variable
    a=10,b=20;
    printf("\nbefore swap this 2 values:%d\t%d",a,b);

    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swap:%d\t%d",a,b);

    return 0;
}
