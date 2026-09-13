int rob(int* nums, int numsSize)
{
    int dp[numsSize];
    dp[0] = nums[0];
    if(numsSize == 1)
        return dp[0];
    dp[1] = nums[0] > nums[1] ? nums[0] : nums[1];
    for(int i = 2; i < numsSize; i++)
    {
        int rob = dp[i-2] + nums[i];
        int skip = dp[i-1];
        dp[i] = rob > skip ? rob : skip;
    }
    return dp[numsSize-1];
}