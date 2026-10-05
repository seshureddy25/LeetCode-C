int* topKFrequent(int* nums, int numsSize, int k, int* returnSize)
{
    int i, j;
    int unique = 0;

    int *arr = (int *)malloc(numsSize * sizeof(int));
    int *count = (int *)malloc(numsSize * sizeof(int));
    int *result = (int *)malloc(k * sizeof(int));

    for (i = 0; i < numsSize; i++)
    {
        int alreadyCounted = 0;

        for (j = 0; j < unique; j++)
        {
            if (nums[i] == arr[j])
            {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        arr[unique] = nums[i];
        count[unique] = 0;

        for (j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                count[unique]++;
            }
        }

        unique++;
    }
    for (i = 0; i < unique - 1; i++)
    {
        for (j = i + 1; j < unique; j++)
        {
            if (count[i] < count[j])
            {
                int temp;

                temp = count[i];
                count[i] = count[j];
                count[j] = temp;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < k; i++)
    {
        result[i] = arr[i];
    }

    *returnSize = k;

    free(arr);
    free(count);

    return result;
}