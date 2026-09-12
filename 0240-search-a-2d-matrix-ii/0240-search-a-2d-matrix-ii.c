

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int cols = matrixColSize[0];
    for(int i = 0; i < matrixSize; i++)
    {
        int left = 0;
        int right = cols - 1;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(matrix[i][mid] == target)
                return true;

            if(matrix[i][mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return false;

}