class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for(int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                int len = j - i + 1;
                if(len >= l && len <= r && sum > 0)
                {
                    ans = min(ans, sum);
                }
                if(len >= r)
                    break;
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};