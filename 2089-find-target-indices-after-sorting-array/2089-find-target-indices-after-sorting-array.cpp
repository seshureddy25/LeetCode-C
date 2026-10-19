class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                arr.push_back(i);
        }
        return arr;

    }
};