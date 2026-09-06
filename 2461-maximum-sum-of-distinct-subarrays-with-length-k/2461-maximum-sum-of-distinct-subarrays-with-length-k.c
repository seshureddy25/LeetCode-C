long long maximumSubarraySum(int* nums, int numsSize, int k)
{
    long long sum = 0;
    long long maxSum = 0;
    int distinct = 0;
    int freq[100001] = {0};

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];

        if (freq[nums[i]] == 0)
            distinct++;

        freq[nums[i]]++;
        if (i >= k)
        {
            sum -= nums[i - k];

            freq[nums[i - k]]--;

            if (freq[nums[i - k]] == 0)
                distinct--;
        }
        if (i >= k - 1 && distinct == k)
        {
            if (sum > maxSum)
                maxSum = sum;
        }
    }

    return maxSum;
}