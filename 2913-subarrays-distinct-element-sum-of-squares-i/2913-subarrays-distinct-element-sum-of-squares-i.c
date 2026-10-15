int sumCounts(int* nums, int numsSize)
{
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int distinct = 0;
        for (int j = i; j < numsSize; j++)
        {
            int found = 0;
            for (int k = i; k < j; k++)
            {
                if (nums[k] == nums[j])
                {
                    found = 1;
                    break;
                }
            }
            if (!found)
                distinct++;
            result += distinct * distinct;
        }
    }
    return result;
}