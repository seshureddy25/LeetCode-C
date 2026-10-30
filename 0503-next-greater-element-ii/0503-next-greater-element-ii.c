/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int *result=malloc(sizeof(int)*numsSize);
    for(int i = 0; i < numsSize; i++)
    {
        result[i] = -1;

        for(int j = 1; j < numsSize; j++)
        {
            int index = (i + j) % numsSize;

            if(nums[index] > nums[i])
            {
                result[i] = nums[index];
                break;
            }
        }
    }
    *returnSize=numsSize;
    return result;
}