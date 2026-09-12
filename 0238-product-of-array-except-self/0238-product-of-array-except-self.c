int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int *result = malloc(numsSize * sizeof(int));
    int prefix = 1;
    int suffix = 1;
    for(int i = 0; i < numsSize; i++)
    {
        result[i] = prefix;
        prefix = prefix * nums[i];
    }
    for(int i = numsSize - 1; i >= 0; i--)
    {
        result[i] = result[i] * suffix;
        suffix = suffix * nums[i];
    }
    *returnSize = numsSize;
    return result;
}