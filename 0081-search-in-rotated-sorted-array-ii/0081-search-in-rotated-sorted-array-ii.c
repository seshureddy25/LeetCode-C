bool search(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    while(left<=right)
    {
        if(nums[left]==target|| nums[right]==target)
            return true;
        left++;
        right--;
    }   
    return false;
}