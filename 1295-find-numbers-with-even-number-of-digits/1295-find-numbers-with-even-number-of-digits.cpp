class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int k=0;
            while(temp>0)
            {
                k++;
                temp/=10;
            }
            if(k%2==0)
                count++;
        }
        return count;
    }
};