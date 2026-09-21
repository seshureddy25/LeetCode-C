/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void fun(int *nums, int start, int end,int **result, int *returnSize, int *returnColumnSizes)
{
    if (start == end)
    {
        result[*returnSize] = malloc(end * sizeof(int));
        for (int i = 0; i < end; i++) result[*returnSize][i] = nums[i];
            returnColumnSizes[*returnSize] = end;
        (*returnSize)++;
        return;
    }

    for (int i = start; i < end; i++)
    {
        swap(&nums[start], &nums[i]);
        fun(nums, start + 1, end,
            result, returnSize, returnColumnSizes);
        swap(&nums[start], &nums[i]);
    }
}

int** permute(int* nums, int numsSize,int* returnSize, int** returnColumnSizes)
{
    int total = 1;
    for (int i = 1; i <= numsSize; i++)
        total *= i;
    int **result = malloc(total * sizeof(int *));
    *returnColumnSizes = malloc(total * sizeof(int));
    *returnSize = 0;
    fun(nums, 0, numsSize,result, returnSize, *returnColumnSizes);
    return result;
}