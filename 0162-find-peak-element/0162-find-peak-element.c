int findPeakElement(int* nums, int numsSize) {
    int max=nums[0];
    int result=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
            result=i;
        }
    }   
    return result;
}