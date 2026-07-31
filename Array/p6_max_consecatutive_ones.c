#include <stdio.h>
int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1};
    int max = 0, cnt = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == 1)
        {
            cnt++;

            if(cnt > max)
                max = cnt;
        }
        else
        {
            cnt = 0;
        }
    }

    if(cnt>max)
        max=cnt;
        
    printf("%d\n", max);

    return 0;
}
