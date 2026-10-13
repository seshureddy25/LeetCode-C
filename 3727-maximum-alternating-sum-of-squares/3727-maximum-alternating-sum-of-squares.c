int compare(void const *a, void const *b)
{
    return *(int*)a-*(int*)b;
}
long long maxAlternatingSum(int* nums, int numsSize) {
    long long sum=0;
    int i=0;
    for(i=0;i<numsSize;i++)
        nums[i]*=nums[i];
    qsort(nums,numsSize,sizeof(int),compare);
    for(i=0;i<numsSize/2;i++)
        sum-=nums[i];
    for(;i<numsSize;i++)
        sum+=nums[i];
    return sum;
}