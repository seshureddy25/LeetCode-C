class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max=0;
        while(left<=right)
        {
            int sum=0;
            if(height[left]>height[right])
            {
                sum=height[right]*abs(left-right);
                right--;
            }
            else
            {
                sum=height[left]*abs(left-right);
                left++;
            }
            if(sum>max)
                max=sum;
        }
        return max;
    }
};