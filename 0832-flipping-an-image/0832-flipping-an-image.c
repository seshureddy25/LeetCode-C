/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** matrix, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
    int **arr=malloc(imageSize*sizeof(int*));
    *returnColumnSizes=malloc(imageSize*sizeof(int));
    for(int i=0;i<imageSize;i++)
    {
        arr[i] = malloc(imageColSize[i] * sizeof(int));
        (*returnColumnSizes)[i] = imageColSize[i];
        int left = 0;
        int right = imageColSize[i] - 1;
        while(left<right)
        {
            int temp=matrix[i][left];
            matrix[i][left]=matrix[i][right];
            matrix[i][right]=temp;
            left++;
            right--;
        }
    }
    for(int i=0;i<imageSize;i++)
    {
        for(int j=0;j<imageSize;j++)
        {
            if(matrix[i][j]==0)
                arr[i][j]=1;
            else
                arr[i][j]=0;
        }
    }
    *returnSize=imageSize;
    return arr;
}