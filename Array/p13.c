//# 11
//container with most water
//Input: height = [1,8,6,2,5,4,8,3,7] , output=49

#include <stdio.h>
int maxArea(int height[], int n)
{
    int left = 0;
    int right = n - 1;
    int maxWater = 0;

    while (left < right)
    {
        int width = right - left;

        int minHeight;
        if (height[left] < height[right])
            minHeight = height[left];
        else
            minHeight = height[right];

        int area = width * minHeight;

        if (area > maxWater)
            maxWater = area;

        // Smaller height pointer move kara
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxWater;
}
int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);

    printf("Maximum Water = %d\n", maxArea(height, n));

    return 0;
}
