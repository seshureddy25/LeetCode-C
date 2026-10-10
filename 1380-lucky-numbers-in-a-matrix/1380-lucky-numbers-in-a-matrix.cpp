class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> arr;
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++) 
        {
            int minVal = matrix[i][0];
            int col = 0;
            for (int j = 1; j < n; j++) 
            {
                if (matrix[i][j] < minVal) 
                {
                    minVal = matrix[i][j];
                    col = j;
                }
            }
            bool lucky = true;
            for (int k = 0; k < m; k++) 
            {
                if (matrix[k][col] > minVal) 
                {
                    lucky = false;
                    break;
                }
            }
            if (lucky) 
            {
                arr.push_back(minVal);
            }
        }
        return arr;
    }
};