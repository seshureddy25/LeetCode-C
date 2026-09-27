class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max=0;
        int zero=0;
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zero++;
            while(zero>k)
            {
                if(nums[left]==0)
                    zero--;
                left++;
            }
            max=std::max(max,i-left+1);
        }
        return max;
    }
};