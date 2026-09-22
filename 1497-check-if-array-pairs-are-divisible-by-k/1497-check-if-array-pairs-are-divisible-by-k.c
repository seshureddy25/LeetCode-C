bool canArrange(int* arr, int arrSize, int k)
{
    int *freq = calloc(k, sizeof(int));

    for(int i = 0; i < arrSize; i++)
    {
        int rem = arr[i] % k;

        if(rem < 0)
            rem += k;

        freq[rem]++;
    }

    if(freq[0] % 2 != 0)
    {
        free(freq);
        return false;
    }

    for(int i = 1; i < k; i++)
    {
        if(freq[i] != freq[k - i])
        {
            free(freq);
            return false;
        }
    }

    free(freq);
    return true;
}