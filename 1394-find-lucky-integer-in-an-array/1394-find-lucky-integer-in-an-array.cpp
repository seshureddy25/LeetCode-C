class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501]={0};
        for(int i=0;i<arr.size();i++)
            freq[arr[i]]++;
        int max=0;
        for(int i=0;i<arr.size();i++)
            if(freq[arr[i]]==arr[i])
                if(arr[i]>max)
                    max=arr[i];
        if(max)
            return max;
        return -1;
    }
};