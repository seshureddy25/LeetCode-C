/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* frequencySort(int* nums, int numsSize, int* returnSize) {
    int freq[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        freq[i]=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
                freq[i]++;
        }
    }
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-1-i;j++)
        {
            if(freq[j] > freq[j + 1] ||(freq[j] == freq[j + 1] && nums[j] < nums[j + 1]))
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;

                temp=freq[j];
                freq[j]=freq[j+1];
                freq[j+1]=temp;
            }
        }
    }
    int *result=malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
        result[i]=nums[i];
    *returnSize=numsSize;
    return result;
}