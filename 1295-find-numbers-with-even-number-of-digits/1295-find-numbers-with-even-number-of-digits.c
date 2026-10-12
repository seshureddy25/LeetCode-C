int findNumbers(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        int temp=nums[i];
        int k=0;
        while(temp>0)
        {
            temp=temp/10;
            k++;
        }
        if(k%2==0)
            count++;
    }
    
    return count;

}