class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr;
        arr.push_back(-1);
        arr.push_back(-1);
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>=target)
                right=mid-1;
            else
                left=mid+1;
        }
        if(left<nums.size()&&nums[left]==target)
        {
            arr[0]=left;
            left=0;
            right=nums.size()-1;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(nums[mid]<=target)
                    left=mid+1;
                else
                     right=mid-1;
                    
            }
            arr[1]=right;
        }
        return arr;
    }
};