int** transpose(int** matrix, int matrixSize, int* matrixColSize,int* returnSize, int** returnColumnSizes) {
    int rows = matrixColSize[0];
    int cols = matrixSize;
    int **arr = malloc(rows * sizeof(int *));
    *returnColumnSizes = malloc(rows * sizeof(int));
    for(int i = 0; i < rows; i++)
    {
        arr[i] = malloc(cols * sizeof(int));
        (*returnColumnSizes)[i] = cols;
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = matrix[j][i];
        }
    }
    *returnSize = rows;
    return arr;
}