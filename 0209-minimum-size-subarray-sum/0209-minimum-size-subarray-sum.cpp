class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0;
    int sum = 0;
    int size=nums.size();
    int minLen = size + 1;
    for (int right = 0; right < size; right++)
    {
        sum += nums[right];
        while (sum >= target)
        {
            int len = right - left + 1;
            if (len < minLen)
                minLen = len;
            sum -= nums[left];
            left++;
        }
    }
    if (minLen == size + 1)
        return 0;
    return minLen;
    }
};