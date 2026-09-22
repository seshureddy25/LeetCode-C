int maxFrequencyElements(int* nums, int numsSize) {
    int freq[101]={0};
    for( int i=0;i<numsSize;i++)
        freq[nums[i]]++;
    int sum=0;
    int max=0;
    for(int i=0;i<numsSize;i++)
    {
        if(freq[nums[i]]>max)
            max=freq[nums[i]];
    }
    for(int i=0;i<numsSize;i++)
    {
        if(freq[nums[i]]==max)
        {
            sum+=max;
            freq[nums[i]]=0;
        }
    }
    return sum;
}