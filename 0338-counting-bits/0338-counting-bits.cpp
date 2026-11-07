class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr;
        int k=0;
        while(k<=n)
        {
            int count=0;
            for(int i=0;i<32;i++)
            {
                if(k&(1<<i))
                    count++;  
            }
            arr.push_back(count);
            k++;
        }
        return arr;
    }
};