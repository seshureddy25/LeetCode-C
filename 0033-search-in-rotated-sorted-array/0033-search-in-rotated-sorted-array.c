int search(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    if(nums[0]==target)
        return 0;
    while(left<right)
    {
        int mid =(left+right)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[left]==target)
            return left;
        if(nums[right]==target)
            return right;
        left++;
        right--;
    }
    return -1;
}