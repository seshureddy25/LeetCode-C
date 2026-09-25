class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 1);
        int pro = 1;
        for (int i = 0; i < n; i++) 
        {
            arr[i] = pro;
            pro *= nums[i];
        }
        pro = 1;
        for (int i = n - 1; i >= 0; i--) 
        {
            arr[i] *= pro;
            pro *= nums[i];
        }
        return arr;
    }
};