class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int median=nums.size()/2;
        int value=nums[median];
        int move=0;
        for(int i=0;i<nums.size();i++)
        {
            move+=abs(nums[i]-value);
        }
        return move;
    }
};