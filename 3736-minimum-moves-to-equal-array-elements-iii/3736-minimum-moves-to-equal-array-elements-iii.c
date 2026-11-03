int minMoves(int* nums, int numsSize) {
    int max=nums[0];
    for(int i=0;i<numsSize;i++)
        if(max<nums[i])
            max=nums[i];
    int result=0;
    for(int i=0;i<numsSize;i++)
    {
        result+=abs(max-nums[i]);
    }
    return result;
}