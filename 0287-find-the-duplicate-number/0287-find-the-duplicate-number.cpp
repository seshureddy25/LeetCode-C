class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int freq[100001]={0};
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(int i=0;i<nums.size();i++)
            if(freq[nums[i]]>1)
                return nums[i];
        return NULL;
    }
};