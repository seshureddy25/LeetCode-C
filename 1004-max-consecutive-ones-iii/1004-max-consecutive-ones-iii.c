int longestOnes(int* nums, int numsSize, int k) {
    int left = 0;
    int zeros = 0;
    int max = 0;
    for (int i = 0; i < numsSize;i++) {
        if (nums[i] == 0)
            zeros++;
        while (zeros > k) {
            if (nums[left] == 0)
                zeros--;

            left++;
        }
        int length =i- left + 1;
        if (length > max)
            max = length;
    }
    return max;
}