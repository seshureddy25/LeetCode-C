int subarraysDivByK(int* arr, int size, int k)
{
    int rem[k];
    int result = 0;
    int sum = 0;
    for (int i = 0; i < k; i++)
        rem[i] = 0;
    rem[0] = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        int r = sum % k;
        if (r < 0)
            r += k;
        result += rem[r];
        rem[r]++;
    }
    return result;
}