#include<stdio.h>
#define MAX 50
int main(void)
{
    int arr[MAX]={0},icounter,num,pos,ele;

    printf("\nEnter the number of element for array:");
    scanf("%d",&num);

    if(num<=0 || num>MAX)
    {
        printf("\ninvalid element you entered.");
        return 0;
    }
    printf("\nEnter %d element:",num);
    for(icounter=0;icounter<num;icounter++)
    {
        scanf("%d",&arr[icounter]);
    }
    printf("\nArray element are:");
    for(icounter=0;icounter<num;icounter++)
    {
        printf("%d\t",arr[icounter]);
    }

    printf("\nEnter the element and position you have to insert:");
    scanf("%d%d",&pos,&ele);

    for(icounter=num-1;icounter>=pos-1;icounter--)
    {
        arr[icounter+1]=arr[icounter];
    }
    arr[pos-1]=ele;
    num++;

    printf("\nArray element are:");
    for(icounter=0;icounter<num;icounter++)
    {
        printf("%d\t",arr[icounter]);
    }
    
    return 0;
}