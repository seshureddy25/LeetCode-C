/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int *result=malloc(numsSize*sizeof(int));
    int k=0;
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize;i++)
        if(nums[i]==target)
            result[k++]=i;
    *returnSize=k;
    return result;
}