int removeDuplicates(int* arr, int size)
{
    int k = 2;
    if(size <= 2)
        return size;
    for(int i = 2; i < size; i++)
    {
        if(arr[i] != arr[k - 2])
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}