
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int even = 1;
        int odd = 0;
        int sum = 0;
        int ans = 0;
        int mod = 1000000007;
        for(int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if(sum % 2 == 0)
            {
                ans = (ans + odd) % mod;
                even++;
            }
            else
            {
                ans = (ans + even) % mod;
                odd++;
            }
        }
        return ans;
    }
};
