class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> arr;
        arr.reserve(m * n);
        for (int i = 0; i < m + n - 1; i++) 
        {
            int r, c;
            if (i % 2 == 0) {
                r = min(i, m - 1);
                c = i- r;
                while (r >= 0 && c < n) {
                    arr.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            } 
            else 
            {
                c = min(i, n - 1);
                r = i - c;
                while (c >= 0 && r < m) {
                    arr.push_back(mat[r][c]);
                    r++;
                    c--;
                }
            }
        }
        return arr;
    }
};