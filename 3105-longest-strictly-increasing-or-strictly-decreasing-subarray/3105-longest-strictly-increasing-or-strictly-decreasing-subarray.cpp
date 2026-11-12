class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int count = INT_MIN;
        int i = 0;
        int j = 1;
        int result = 1;
        while(j < nums.size()){

            if(nums[i] < nums[j]){
                result++;
            }
            else
            {
                count = max(count, result);
                result = 1;
            }
            i++;
            j++;
        }
        count = max(count, result);
        i = 0;
        j = 1;
        result = 1;
        while(j < nums.size()){
            if(nums[i] > nums[j]){
                result++;
            }
            else{
                count = max(count, result);
                result = 1;
            }
            i++;
            j++;
        }
        count = max(count, result);
        return count == INT_MIN ? 1 : count;
    }
};