/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *arr=malloc(numsSize*sizeof(int));
    int j=numsSize-1;
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]%2==0)
            arr[k++]=nums[i];
        else
            arr[j--]=nums[i];
    }
    *returnSize=numsSize;
    return arr;
}