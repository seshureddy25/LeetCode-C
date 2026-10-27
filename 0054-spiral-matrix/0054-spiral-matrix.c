/**
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int size = rows * cols;
    int *arr = malloc(size * sizeof(int));
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;
    int k = 0;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
            arr[k++] = matrix[top][j];
        top++;
        for (int i = top; i <= bottom; i++)
            arr[k++] = matrix[i][right];
        right--;
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                arr[k++] = matrix[bottom][j];
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                arr[k++] = matrix[i][left];
            left++;
        }
    }
    *returnSize = k;
    return arr;
}