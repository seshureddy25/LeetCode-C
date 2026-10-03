class Solution {
public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    int max=0,count=0;
        int result=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
            }
            else
            {
                count=0;
            }
            if(count>max)
            {
                max=count;
                result=arr[i];
            }
        }
        return result;
    }
};