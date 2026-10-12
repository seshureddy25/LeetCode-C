int** matrixReshape(int** mat, int matSize, int* matColSize,int r, int c, int* returnSize,int** returnColumnSizes)
{
    int m = matSize;
    int n = matColSize[0];
    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = malloc(m * sizeof(int));
        for (int i = 0; i < m; i++)
            (*returnColumnSizes)[i] = matColSize[i];
        return mat;
    }
    int** arr = malloc(r * sizeof(int*));
    *returnColumnSizes = malloc(r * sizeof(int));
    for (int i = 0; i < r; i++) 
    {
        arr[i] = malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (int i = 0; i < m * n; i++) 
    {
        arr[i / c][i % c] = mat[i / n][i % n];
    }
    *returnSize = r;
    return arr;
}