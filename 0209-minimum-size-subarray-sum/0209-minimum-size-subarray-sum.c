int minSubArrayLen(int target, int* arr, int size)
{
    int left = 0;
    int sum = 0;
    int minLen = size + 1;
    for (int right = 0; right < size; right++)
    {
        sum += arr[right];
        while (sum >= target)
        {
            int len = right - left + 1;
            if (len < minLen)
                minLen = len;
            sum -= arr[left];
            left++;
        }
    }
    if (minLen == size + 1)
        return 0;
    return minLen;
}