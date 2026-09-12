bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
{
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int left = 0;
    int right = rows * cols - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        int row = mid / cols;
        int col = mid % cols;
        if(matrix[row][col] == target)
            return true;
        if(matrix[row][col] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}