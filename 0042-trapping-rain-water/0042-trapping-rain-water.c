int trap(int* height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int left_max = height[left];
    int right_max = height[right];
    int water = 0;
    while (left < right)
    {
        if (left_max < right_max)
        {
            left++;
            if (height[left] > left_max)
                left_max = height[left];
            else
                water += left_max - height[left];
        }
        else
        {
            right--;
            if (height[right] > right_max)
                right_max = height[right];
            else
                water += right_max - height[right];
        }
    }
    return water;
}