class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int minstock=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            int profit=prices[i]-minstock;
            if(profit>max)
                max=profit;
            if(prices[i]<minstock)
                minstock=prices[i];
        }
        return max;
    }
};