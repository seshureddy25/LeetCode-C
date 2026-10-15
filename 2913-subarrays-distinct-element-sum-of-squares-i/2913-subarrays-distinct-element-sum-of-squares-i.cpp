class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int n = nums.size();
        int result = 0;
        for (int i = 0; i < n; i++) 
        {
            vector<int> arr;
            for (int j = i; j < n; j++) 
            {
                arr.push_back(nums[j]);
                vector<int> temp = arr;
                sort(temp.begin(), temp.end());
                int count = unique(temp.begin(), temp.end()) - temp.begin();
                result += count * count;
            }
        }
        return result;
    }
};