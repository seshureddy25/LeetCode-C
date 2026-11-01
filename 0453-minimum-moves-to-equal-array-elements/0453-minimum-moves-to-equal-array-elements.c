int minMoves(int* nums, int numsSize)
{
    int min = nums[0];
    int sum = 0;
    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] < min)
            min = nums[i];
    }
    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i] - min;
    }
    return sum;
}