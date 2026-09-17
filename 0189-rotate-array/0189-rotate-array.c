void rotate(int *arr, int size, int k)
{
    if (arr == NULL || size <= 0)
        return;
    k = k%size;
    int *result = malloc(size * sizeof(int));
    if (result == NULL)
        return;
    int j = 0;
    for (int i = size - k; i < size; i++)
        result[j++] = arr[i];
    for (int i = 0; i < size - k; i++)
        result[j++] = arr[i];
    for (int i = 0; i < size; i++)
        arr[i] = result[i];

    free(result);
}