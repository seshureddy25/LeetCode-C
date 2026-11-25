class Solution {
public:
bool checkSubarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_set<int>s;
    nums[0] %= k;
    for (int i = 1;i < n;i++) 
    {
            nums[i] += nums[i - 1];
            nums[i] %= k;
            if (s.find(nums[i]) != s.end() || (i && !nums[i])) 
                return true;
            s.insert(nums[i - 1]);
    }
    return false;
    }
};
