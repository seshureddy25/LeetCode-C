class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[nums.size()];
        dp[0] = nums[0];
        if(nums.size() == 1)
            return dp[0];
        dp[1] = nums[0] > nums[1] ? nums[0] : nums[1];
        for(int i = 2; i <nums.size(); i++)
        {
            int rob = dp[i-2] + nums[i];
            int skip = dp[i-1];
            dp[i] = rob > skip ? rob : skip;
        }
        return dp[nums.size()-1];
    }
};