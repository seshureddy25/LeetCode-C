class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            if(nums[left]==target)
                return true;
            if(nums[right]==target)
                return true;
            left++;
            right--;
        }
        return false;
    }
};