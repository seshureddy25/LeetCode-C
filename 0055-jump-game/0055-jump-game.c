bool canJump(int* nums, int numsSize) {
    int end=0;
    for(int i=0;i<numsSize;i++)
    {
        if(i>end)
        return false;
        if(i+nums[i]>=end)
        end=i+nums[i];
        if(end>=numsSize-1)
        return true;
    }
    return true;
}