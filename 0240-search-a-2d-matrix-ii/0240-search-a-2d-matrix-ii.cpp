class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0;
        int bottom=matrix.size()-1;
        while(top<=bottom)
        {
        int left=0;
        int right=matrix[top].size()-1;
            while(left<=right)
            {
                int mid=left+(right-left)/2;
                if(matrix[top][mid]==target)
                    return true;
                if(matrix[top][mid]>target)
                    right=mid-1;
                else
                    left=mid+1;
            }
            top++;
        } 
        return false;   
    }
};