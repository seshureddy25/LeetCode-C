/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}
int* majorityElement(int* nums, int numsSize, int* returnSize)
{
    int *result = malloc(2 * sizeof(int));
    int k = 0;
    int found = numsSize / 3;
    qsort(nums, numsSize, sizeof(int), compare);
    int i = 0;
    while(i < numsSize)
    {
        int count = 0;
        while(i + count < numsSize && nums[i] == nums[i + count])
        {
            count++;
        }
        if(count > found)
        {
            result[k++] = nums[i];
        }
        i = i + count;
    }
    *returnSize = k;
    return result;
}