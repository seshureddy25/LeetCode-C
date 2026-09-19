int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}
int thirdMax(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    int prev=nums[numsSize-1];
    int count=1;
    for(int i=numsSize-2;i>=0;i--)
    {
        if (nums[i] != prev)
        {
            count++;
            prev = nums[i];

            if (count == 3)
                return nums[i];
        }
    }

    return nums[numsSize - 1];
}