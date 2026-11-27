class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        int maxi = 0;
        for(auto num : s)
        {
            if(s.find(num - 1) == s.end())
            {
                int count = 1;
                while(s.find(num + 1) != s.end())
                {
                    count++;
                    num++;
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
