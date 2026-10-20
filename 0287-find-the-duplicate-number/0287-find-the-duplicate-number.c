int findDuplicate(int* nums, int numsSize) {
    int freq[100001]={0};
    for(int i=0;i<numsSize;i++)
        freq[nums[i]]++;
    for(int i=0;i<numsSize;i++)
        if(freq[nums[i]]>1)
            return nums[i];
    return -1;   
}