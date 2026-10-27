/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int **result=malloc(n*sizeof(int*));
    *returnColumnSizes=malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        result[i] = malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }
    int left=0,right=n-1;
    int top=0, bottom=n-1;
    int k=1;
    while(left<=right&&top<=bottom)
    {
        for(int i=left;i<=right;i++){
            result[top][i]=k++;
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            result[i][right]=k++;
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--){
                result[bottom][i]=k++;
            }
            bottom--;
        }
       
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--){
                result[i][left]=k++;
            }
            left++;
        }
    }
    *returnSize=n;
    return result;
}