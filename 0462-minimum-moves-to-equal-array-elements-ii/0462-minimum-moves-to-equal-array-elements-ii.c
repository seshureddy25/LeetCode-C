int compare(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}
int minMoves2(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    int median=numsSize/2;
    int value=nums[median];
    int move=0;
    int left=0;
    int right=numsSize-1;
    while(left<right)
    {
        move+=abs(nums[left]-nums[median])+abs(nums[right]-nums[median]);
        left++;
        right--;
    }
    return move;
}