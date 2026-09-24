/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    
    int *arr = malloc(matrixSize * sizeof(int));
    *returnSize = 0;
    for(int i = 0; i < matrixSize; i++)
    {
        int min = matrix[i][0];
        int col = 0;
        for(int j = 1; j < matrixColSize[i]; j++)
        {
            if(matrix[i][j] < min)
            {
                min = matrix[i][j];
                col = j;
            }
        }
        int isLucky = 1;
        for(int k = 0; k < matrixSize; k++)
        {
            if(matrix[k][col] > min)
            {
                isLucky = 0;
                break;
            }
        }
        if(isLucky)
        {
            arr[*returnSize] = min;
            (*returnSize)++;
        }
    }
    return arr;
}